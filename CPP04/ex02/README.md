# CPP04/ex02 - Abstract Class

## Issue

- Prevent direct instantiation of the base `Animal` class.
- Keep polymorphic access through `Animal*`.
- Preserve the deep-copy behavior from the previous exercise.

## Solve

- `Animal::makeSound` is declared pure virtual with `= 0`.
- `Animal` still provides shared construction, assignment, destruction, and `getType`.
- `Dog` and `Cat` remain concrete because they implement `makeSound`.
- `Dog` and `Cat` still own a dynamically allocated `Brain` and deep-copy it.
- `main` creates `Dog` and `Cat` through `Animal*`, then proves sound dispatch and deep copies still work.

## Build / Run

- Build: `make`
- Run: `./ex02`
- Clean objects: `make clean`
- Remove executable: `make fclean`

