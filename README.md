# plthook - C library for hooking PLT and IAT entries

This is a `build2` package repository for [`plthook`](https://github.com/kubo/plthook),
a C library that hooks library function calls issued by a specified object
file by rewriting PLT, Mach-O bind, or IAT entries.

This file contains setup instructions and other details that are more
appropriate for development rather than consumption. If you want to use
`plthook` in your `build2`-based project, then instead see the accompanying
[`PACKAGE-README.md`](libplthook/PACKAGE-README.md) file.

The development setup for `plthook` uses the standard `bdep`-based workflow.
For example:

```
git clone --recursive https://github.com/build2-packaging/plthook.git
cd plthook

bdep init -C @gcc cc config.cxx=g++ config.c=gcc
bdep update
bdep test
```
