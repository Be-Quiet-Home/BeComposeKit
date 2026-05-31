# Phase 0003 — BeCommand

## Goal

Introduce the first small BeComposeKit brick: `BeCommand`.

`BeCommand` describes a reusable application command while keeping `BMessage` as the native Haiku communication currency.

## Design rule

`BeCommand` is not an action system copied from another toolkit.

It is a small convenience object for native Haiku command wiring.

## Included

- command name
- user-visible label
- native `uint32 what` message code
- validity check
- `BMessage` creation helper
- smoke test

## Excluded

- command dispatching
- menus
- toolbars
- shortcuts
- enable/disable state
- icons
- undo/redo
- command registry

Those belong to later bricks.
