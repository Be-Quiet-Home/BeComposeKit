# Phase 0004 — BeCommandRegistry

## Goal

Introduce `BeCommandRegistry`, a small container brick for registered `BeCommand` objects.

The registry provides lookup and duplicate prevention. It does not execute commands.

## Included

- add valid commands
- reject invalid commands
- reject duplicate command names
- reject duplicate message codes
- count commands
- find by command name
- find by native `uint32 what`
- simple smoke test

## Excluded

- command dispatching
- target handling
- menu generation
- toolbar generation
- shortcuts
- enable/disable state
- undo/redo
- persistence

## Design rule

`BeCommandRegistry` is only a command shelf.

Execution remains a later, separate brick.
