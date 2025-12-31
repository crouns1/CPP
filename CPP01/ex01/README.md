# CPP01 — ex01 (Zombie Horde)

## Goal
Practice **dynamic arrays of objects** with `new[]` / `delete[]`, and basic initialization of each element.

## Files
- `zombiecrowd.hpp`: declaration of `Zombie` (minimal) + `zombieHorde()`.
- `Zombie.cpp`: implements `Zombie::announce()` and `Zombie::setTheName()`.
- `zombieHorde.cpp`: allocates an array of `Zombie` and sets each name.
- `main.cpp`: creates a horde, iterates, then frees it.

## Core concepts

### 1) Allocating an array of objects
This exercise uses:
- `Zombie* crowd = new Zombie[N];`

That creates **N Zombie objects** on the heap, calling the default constructor for each element (if there is one / or compiler-generated).

### 2) Initializing each element
After allocation, each zombie gets configured in a loop:
- `crowd[i].setTheName(name);`

This is important: for arrays of objects, you often:
1. allocate all objects
2. then initialize/configure each element

### 3) Freeing an array correctly
Arrays allocated with `new[]` must be freed with `delete[]`:
- `delete[] crowd;`

If you use `delete` instead of `delete[]`, behavior is incorrect.

### 4) Ownership and lifetime
- The function `zombieHorde()` returns a pointer to heap memory.
- The caller (here `main`) **owns** it and must free it.

## Edge cases to think about
- What should happen if `N <= 0`?
- Large `N` (memory usage).
- Ensuring each element is initialized.

## Build / Run
```sh
make
./moar_brainz
```

## Takeaway
- `new[]` / `delete[]` are paired.
- Arrays of objects require careful initialization and cleanup.