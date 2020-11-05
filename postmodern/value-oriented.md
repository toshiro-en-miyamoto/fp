# Value-oriented design

## Squaring the Circle: Value-oriented design in an object-oriented system
Juan Pedro Bolivar Puente, C++ on Sea 2020

Cursors:
- resolve the **impedance mismatch** between value-based data model and object-oriented UI
- **incremental redesign** an object-oriented data model to value-oriented


## OO Considered Harmful
Phil Nash, CppCon 2020

Low level: Prefer immutable value types
- Persistent data structures
- Monadic operations
- Builders
- Functionally composable algorythms (e.g., ranges)

High level: Components with encapsulated state
- Maybe active objects, actors, coroutines
