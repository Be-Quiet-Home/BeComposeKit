# BeComposeKit

**Haiku itself, in handy building blocks.**

BeComposeKit is a native Haiku application composition kit. It is not a toolkit replacement, not a Qt clone, not a cross-platform abstraction layer, and not a new UI philosophy on top of Haiku.

Its purpose is simple:

> Provide the kind of immediate developer comfort often associated with large toolkits, but entirely through native Haiku/BeOS concepts.

## Doctrine

BeComposeKit follows one central rule:

> Be on maximum.

That means:

- Haiku/BeOS concepts first.
- Native Kits first.
- `BMessage` remains the communication currency.
- `BHandler`, `BLooper`, and `BMessenger` remain the nervous system.
- `BApplication`, `BWindow`, `BView`, and `BLayout` remain the application body.
- Storage Kit, Translation Kit, Locale Kit, Network Kit, Media Kit and other native facilities are used where appropriate.
- No foreign toolkit concepts are imported.
- No cross-platform abstraction is pursued.

## What BeComposeKit is

BeComposeKit is intended to become a small, practical set of reusable native Haiku building blocks for common application structures:

- command wiring
- window shells
- layout recipes
- preferences
- background jobs
- document-style app scaffolding
- reusable view compositions

The first goal is not to solve every GUI problem. The first goal is to reduce the repeated boilerplate that prevents small native Haiku applications from starting quickly and cleanly.

## What BeComposeKit is not

BeComposeKit is not:

- a Qt compatibility layer
- a Qt-inspired framework
- a widget replacement system
- a theme engine
- a custom event loop
- a cross-platform toolkit
- a visual designer
- an IDE

Qt may be used only as an external comfort benchmark: the level of immediacy, completeness, and developer convenience that native Haiku composition should be able to reach.

## Project direction

The project should grow as small independent bricks. Each brick must be useful on its own, stay faithful to Haiku's architecture, and avoid introducing concepts that hide or weaken the native system.

Initial candidate bricks:

- `BeCommand`
- `BeCommandRegistry`
- `BeWindowShell`
- `BeLayoutRecipes`
- `BeJobRunner`
- `BePreferences`
- `BeAppScaffold`

A future **Kit Composer** tool may generate or assemble native Haiku applications from these building blocks. That tool is not part of the initial scope.

## Slogan

> BeComposeKit — Be a Composer.
