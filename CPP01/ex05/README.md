# CPP01/ex05 - Harl 2.0

## Issue

- Create a `Harl` class with private complaint methods.
- Dispatch a requested level to the matching method.
- Practice calling member functions through pointers.

## Solve

- `debug`, `info`, `warning`, and `error` are private methods.
- `complain` declares a pointer-to-member-function type.
- A `switch` on the first character of the level selects the matching method.
- If a method is selected, `(this->*action)()` calls it.
- Current behavior: unknown levels do not print anything.
- Current caveat: a safer version should check that `level` is not empty before reading `level[0]`.

## Build / Run

- Build: `make`
- Run: `./harl`
- Clean objects: `make clean`
- Remove executable: `make fclean`

