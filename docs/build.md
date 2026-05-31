# Building BeComposeKit

BeComposeKit is developed as a native Haiku C++ library.

The initial build system is intentionally small and uses a hand-written `Makefile`.

## Build

```sh
make clean
make
````

## Smoke test

```sh
make check
```

Expected output:

```text
BeComposeKit 0.1.0
```

## Generated files

Build output is written to:

```text
build/
```

This directory is intentionally ignored by Git.

## Build doctrine

The build system should stay small, readable, and native-friendly.

BeComposeKit should not start with a heavy build stack. Additional build tooling may be introduced later only when it solves a real project need.

