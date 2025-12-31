# CPP01 — ex05 (Harl)

## Goal
Route behavior based on a string “level”, and practice **member function pointers** for clean dispatch.

## Files
- `Harl.hpp` / `Harl.cpp`: class `Harl` and its complaint methods.
- `main.cpp`: runs the logger with either a CLI argument or a demo sequence.
- `Makefile`: builds the program.

## Core concepts

### 1) Encapsulation
`Harl` exposes only:
- `void complain(std::string level);`

The actual actions are private:
- `debug()`, `info()`, `warning()`, `error()`

So users can’t call internals directly; they must go through the public API.

### 2) Member function pointers (dispatch table)
Instead of long `if/else` chains, `complain()` uses:
- an array of known string levels: `{"DEBUG","INFO","WARNING","ERROR"}`
- an array of corresponding actions:
  - `&Harl::debug`, `&Harl::info`, `&Harl::warning`, `&Harl::error`

Then it searches for a match and invokes:
```cpp
(this->*actions[i])();
```

This is a common pattern for mapping keys → behaviors.

### 3) Handling unknown input
If the provided level doesn’t match any known level, the program prints a default message.
This is important for robustness: don’t crash or do nothing silently.

## Build / Run
```sh
make
./harl
./harl DEBUG
./harl NOT_A_LEVEL
```

## Takeaway
- Member function pointers let you build clean, scalable dispatch logic.
- Keep implementation details private and expose a small public interface.
- Always define behavior for unexpected input.