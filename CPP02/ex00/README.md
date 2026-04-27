# CPP02/ex00 - Fixed Point Basics

## Issue

- Implement a first `Fixed` class using the Orthodox Canonical Form.
- Store a raw fixed-point value.
- Provide accessors for the raw bits.
- Show copy construction and copy assignment.

## Solve

- `Fixed` stores `fixed_point_num_val` as an `int`.
- `num_fract_bits` is a static constant set to `8`.
- The default constructor initializes the raw value to `0`.
- The copy constructor and assignment operator copy the raw value.
- `getRawBits` and `setRawBits` expose the stored integer representation.
- `main` creates, copies, assigns, and prints raw values to demonstrate the flow.

## Build / Run

- Build: `make`
- Run: `./fixed`
- Clean objects: `make clean`
- Remove executable: `make fclean`

