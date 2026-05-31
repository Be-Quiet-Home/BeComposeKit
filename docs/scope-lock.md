# BeComposeKit Scope Lock

## Purpose

BeComposeKit exists to make native Haiku application development more immediate without importing foreign toolkit concepts.

The goal is not to hide Haiku.

The goal is to compose Haiku.

## Non-goals

BeComposeKit will not provide:

- cross-platform abstraction
- Qt compatibility
- custom widget theming
- a replacement event loop
- a visual designer in the initial phase
- an IDE
- a generic application framework detached from Haiku Kits

## Initial scope

The initial scope is limited to a small native C++ library with practical helper bricks:

1. command wiring
2. basic app scaffolding
3. reusable window shell patterns
4. layout recipes
5. preferences helper
6. background job helper

## Design rule

Every component must answer:

> Which native Haiku concept does this make easier to use?

If that question cannot be answered clearly, the component does not belong in BeComposeKit.
