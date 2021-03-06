While [Nix](https://nixos.org/nix/) can be used to quickly open a shell with all dependencies for the [standard setup](index.md) installed, we also support a setup based purely on Nix, though it is still experimental; in particular, it is heavily based on an unreleased version of Nix enabling [Nix Flakes](https://www.tweag.io/blog/2020-05-25-flakes/). The setup has been tested on NixOS, other Linux distributions, and macOS.

# Setup

After installing (any version of) Nix ([https://nixos.org/download.html]), you can easily open a shell with the particular pre-release version of Nix needed by and tested with our setup (called the "Lean shell" from here on):
```bash
# in the Lean root directory
$ nix-shell -A nix
```
While this shell is sufficient for executing the steps below, it is recommended to also set the following options in `/etc/nix/nix.conf` (`nix.extraOptions` in NixOS):
```
max-jobs = auto  # Allow building multiple derivations in parallel
keep-outputs = true  # Do not garbage-collect build time-only dependencies (e.g. clang)
extra-sandbox-paths = /nix/var/cache/ccache  # Extra local cache for C/C++ code
# Allow fetching build results from the Lean Cachix cache
trusted-substituters = https://lean4.cachix.org/
trusted-public-keys = cache.nixos.org-1:6NCHdD59X431o0gWypbMrAURkbJ16ZPMQFGspcDShjY= lean4.cachix.org-1:mawtxSxcaiWE24xCXXgh3qnvlTkyU7evRRnGeAhD4Wk=
```
On a multi-user installation of Nix (the default), you need to restart the Nix daemon afterwards:
```bash
sudo pkill nix-daemon
```

The [Cachix](https://cachix.org/) integration will magically beam any build steps already executed by the CI right onto your machine when calling Nix commands in the shell opened above.
On top of the local and remote Nix cache, we do still rely on CCache as well to make C/C++ build steps incremental, which are atomic steps from Nix's point of view.
If you add the `extra-sandbox-paths` line above, you **must** also set up that directory as follows:
```bash
sudo mkdir -m0770 -p /nix/var/cache/ccache
# macOS standard chown doesn't support --reference
nix shell .#nixpkgs.coreutils -c sudo chown --reference=/nix/store /nix/var/cache/ccache
```

Note: Your system Nix might print warnings about not knowing some of these settings, which can be ignored.

# Basic Build Commands

From the Lean root directory inside the Lean shell:
```bash
nix build .#stage1  # build this stage's stdlib & executable
nix build .#stage1.test  # run all tests
nix run .#stage1.update-stage0  # update ./stage0 from this stage
nix run .#stage1.update-stage0-commit  # ...and commit the results
```
The `stage1.` part in each command is optional:
```bash
nix build .#test  # run tests for stage 1
nix build .  # build stage 1
nix build  # dito
```
On a build error, Nix will show the last 10 lines of the output by default. You can pass `-L` to `nix build` to show all lines, or pass the shown `*.drv` path to `nix log` to show the full log after the fact.

Keeping all outputs ever built on a machine alive can accumulate to quite impressive amounts of disk space, so you might want to trigger the Nix GC when /nix/store/ has grown too large:
```bash
nix-collect-garbage
```
This will remove everything not reachable from "GC roots" such as the `./result` symlink created by `nix build`, so you might want to call that first to keep your current stage 1 alive.

# Build Process Description

The Nix build process conceptually works the same as described in [Lean Build Pipeline](index.md#lean-build-pipeline).
However, there are two important differences in practice apart from the standard Nix properties (hermeneutic, reproducible builds stored in a global hash-indexed store etc.):
* Only files tracked by git (using `git add` or at least `git add --intent-to-add`) are compiled.
This is actually a general property of Nix flakes, and has the benefit of making it basically impossible to forget to commit a file (at least in `src/`).
* Only files reachable from `src/Lean.lean` are compiled.
This is because modules are discovered not from a directory listing anymore but by recursively compiling all dependencies of that top module.

# Emacs Integration

Starting a known-good (pinned) version of Emacs from the Lean shell with `lean4-mode` fully set up for development on Lean is as easy as:
```bash
nix run .#emacs-dev
```
If you've already installed lean4-mode manually, you might need to first deactivate that. `elan` can be left as is on the other hand.

Arguments can be passed as well:
```bash
nix run .#emacs-dev src/Lean.lean
```

Note that the UX of `emacs-dev` is quite different from the Make-based setup regarding the compilation of dependencies:
there is no mutable directory incrementally filled by the build that we could point the editor at for .olean files.
Instead, `emacs-dev` will gather the individual dependency outputs from the Nix store when checking a file -- and build them on the fly when necessary.
However, it will only ever load changes saved to disk, not ones opened in other buffers.

# Other Fun Stuff to Do with Nix

Open Emacs with Lean set up from an arbitrary commit (without even cloning Lean beforehand... if your Nix is new enough):
```bash
nix run github:leanprover/lean4/7e4edeb#emacs-package
```

Open a shell with `lean` and `LEAN_PATH` set up for compiling a specific module (this is exactly what `emacs-dev` is doing internally):
```bash
nix develop .#mods.\"Lean.Parser.Basic\"
# alternatively, directly pass a command to execute:
nix develop .#stage2.mods.\"Init.Control.Basic\" -c bash -c 'lean $src -Dtrace.Elab.command=true'
```

Not sure what you just broke? Run Lean from (e.g.) the previous commit on a file:
```bash
nix run .\?rev=$(git rev-parse @^) scratch.lean
```

Work on two adjacent stages at the same time without the need for repeatedly updating and reverting `stage0/`:
```bash
# open an editor that will use only committed changes (so first commit them when changing files)
nix run .#HEAD-as-stage1.emacs-dev&
# open a second editor that will use those commited changes as stage 0
# (so don't commit changes done here until you are done and ran a final `update-stage0-commit`)
nix run .#HEAD-as-stage0.emacs-dev&
```
To run `nix build` on the second stage outside of the second editor, use
```bash
nix build .#stage0-from-input
```
This setup will inadvertently change your `flake.lock` file, which you can revert when you are done.

...more surely to come...

# Debugging

Since Nix copies all source files before compilation, you will need to map debug symbols back to the original path using `set substitute-path` in GDB.
For example, for a build on Linux with the Nix sandbox activated:
```bash
(gdb) f
#1  0x0000000000d23a4f in lean_inc (o=0x1) at /build/source/build/include/lean/lean.h:562
562	/build/source/build/include/lean/lean.h: No such file or directory.
(gdb) set substitute-path /build/source/build src
(gdb) f
#1  0x0000000000d23a4f in lean_inc (o=0x1) at /build/source/build/include/lean/lean.h:562
562	static inline void lean_inc(lean_object * o) { if (!lean_is_scalar(o)) lean_inc_ref(o); }
```

# Building Lean Packages with Nix

From a Lean shell, run
```bash
$ nix flake new mypkg -t github:leanprover/lean4
```
to create a new Lean package in directory `mypkg`.
The Lean package comes with a package root file `MyPackage.lean` and a `flake.nix` set up so you can run most command from above on your own package.
In particular, you can run `nix run .#emacs-dev` in the package directory to start Emacs configured to automatically build and provide any intra- and extra-package dependencies on the fly.

Note that if you rename `MyPackage.lean`, you also have to adjust the `name` attribute in `flake.nix` accordingly.

Package dependencies can be added as further input flakes and passed to the `deps` list of `buildLeanPackage`. Example: https://github.com/Kha/testpkg2/blob/master/flake.nix

For hacking, it can be useful to temporarily override an input with a local checkout/different version of a dependency:
```bash
$ nix build --override-input somedep path/to/somedep
```

In the future, we would like to introduce a simpler, more generic package description file akin to Lean 3's `leanpkg.toml` that is not Nix-specific and can be produced and consumed by other package manager implementations.
It should be possible to consume it with `builtins.fromTOML` in the Nix setup.
