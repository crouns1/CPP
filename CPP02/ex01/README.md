# CPP02/ex01 - Fixed Point Conversion

## Issue

- Extend `Fixed` so it can be created from integers and floats.
- Convert a fixed-point value back to integer and float forms.
- Print fixed-point objects with `operator<<`.

## Solve

- Integer construction stores `n << 8`.
- Float construction stores `roundf(f * (1 << 8))`.
- `toFloat` divides the raw value by `1 << 8`.
- `toInt` shifts the raw value right by `8`.
- `operator<<` streams the float representation.
- `main` compares default, integer, float, copied, and assigned values.

## Build / Run

- Build: `make`
- Run: `./fixed`
- Clean objects: `make clean`
- Remove executable: `make fclean`

