# CPP01/ex01 - Zombie Horde

## Issue

- Allocate several zombies in one operation.
- Give every zombie in the horde the same name.
- Let the caller use the array and then free it correctly.

## Solve

- `zombieHorde` allocates `N` zombies with `new Zombie[N]`.
- A loop assigns the requested name to each zombie through `setTheName`.
- `main` iterates over the returned array and calls `announce` for every entry.
- The horde is released with `delete[]`, matching the array allocation.

## Build / Run

- Build: `make`
- Run: `./moar_brainz`
- Horde size is defined by `HORDE_SIZE` in `zombiecrowd.hpp`.
- Clean objects: `make clean`
- Remove executable: `make fclean`

