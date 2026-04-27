# CPP04/ex01 - Deep Copy

## Issue

- Add a dynamically allocated `Brain` to `Dog` and `Cat`.
- Avoid shallow-copy bugs when objects are copied or assigned.
- Confirm that edits to one object's ideas do not affect its copy.

## Solve

- `Brain` stores 100 `std::string` ideas.
- `Dog` and `Cat` allocate a `Brain` in their constructors.
- Their destructors delete the owned `Brain`.
- Copy constructors allocate a new `Brain` copied from the source object.
- Assignment operators delete the current `Brain`, then allocate a copied replacement.
- `main` changes an original after copying and prints both ideas to prove the copy is independent.

## Build / Run

- Build: `make`
- Run: `./ex01`
- Clean objects: `make clean`
- Remove executable: `make fclean`

