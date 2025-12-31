# CPP01 — ex00 (Zombie)

## Goal
Learn the difference between **stack allocation** and **heap allocation** in C++ (and how constructors/destructors behave in each case).

## Files
- `Zombie.hpp` / `Zombie.cpp`: the `Zombie` class (constructor, destructor, `announce()`).
- `newZombie.cpp`: creates a `Zombie` on the **heap** using `new`.
- `randomChump.cpp`: creates a `Zombie` on the **stack** as a local variable.
- `main.cpp`: demonstrates both cases.

## Core concepts

### 1) Stack vs Heap
**Stack (automatic storage)**:
- Object is created as a local variable.
- Destructor is called automatically when the variable goes out of scope.

Example idea used in `randomChump()`:
- `Zombie z(name);`  → stack object
- when `randomChump()` returns, `z` is destroyed automatically.

**Heap (dynamic storage)**:
- Object is created with `new`.
- You receive a pointer (`Zombie*`).
- You must free it with `delete` exactly once.

Example idea used in `newZombie()`:
- `Zombie* z = new Zombie(name);`
- later in `main()`: `delete z;`

### 2) Constructors / Destructors
- The constructor runs at creation time (stack or heap).
- The destructor runs:
  - automatically for stack objects at end of scope
  - only when you call `delete` for heap objects

### 3) Pointers
`new` returns a pointer (`Zombie*`), so you access members with `->`.

## Common mistakes to avoid
- Forgetting `delete` for heap zombies → memory leak.
- Doing `delete` on a stack object pointer (invalid).
- Deleting twice (double free).

## Build / Run
```sh
make
./zombie
```

## Takeaway
- Use the stack by default.
- Use the heap only when you truly need dynamic lifetime, and then manage it carefully (`new` / `delete`).