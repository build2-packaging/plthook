# libplthook - C library for hooking PLT and IAT entries

This is a `build2` package for the [`plthook`](https://github.com/kubo/plthook)
C library. It hooks library function calls issued by a specified object file
(executable or shared library) by rewriting PLT entries on ELF, Mach-O bind
information on Apple platforms, and IAT entries on Windows.


## Usage

To start using `libplthook` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libplthook ^0.0.1
```

Then import the library in your `buildfile`:

```
import libs = libplthook%lib{plthook}
```

Include the public header as `<plthook.h>`. Upstream has no version tags, so
this package uses `0.0.1`. The ELF implementation links `libdl`. The BSD
implementation links `libutil`. The Windows implementation links DbgHelp.
Apple builds use libSystem only.


## Importable targets

This package provides the following importable targets:

```
lib{plthook}
```

The compiled hooking library. Exactly one of `plthook_elf.c`, `plthook_osx.c`,
or `plthook_win32.c` is compiled for the target platform. All three remain in
the source distribution.


## Configuration variables

This package has no configuration variables.
