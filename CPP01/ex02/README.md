# CPP01/ex02 - This Is Brain

## Issue

- Demonstrate how a pointer and a reference can point to the same object.
- Print both addresses and values so the relationship is visible.

## Solve

- `str` owns the text `This is a brain`.
- `stringPTR` stores the address of `str`.
- `stringREF` is a reference bound to `str`.
- The program prints the address of all three views and then prints their values.
- The matching addresses show that the pointer and reference both access the original string.

## Build / Run

- Build: `make`
- Run: `./ThisIsBrain`
- Clean objects: `make clean`
- Remove executable: `make fclean`

