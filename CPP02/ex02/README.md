# CPP02/ex02 - Fixed Point Operators

## Issue

- Make the `Fixed` class act more like a numeric type.
- Add comparisons, arithmetic operators, increments, decrements, and min/max helpers.
- Preserve the fixed-point scale during multiplication and division.

## Solve

- Comparison operators compare the raw fixed-point values directly.
- Addition and subtraction add or subtract raw values.
- Multiplication uses `long long`, multiplies raw values, then shifts right by the fractional bit count.
- Division shifts the numerator left before dividing by the other raw value.
- Prefix increment/decrement mutate and return `*this`.
- Postfix increment/decrement return a saved copy before mutation.
- `min` and `max` return references, with const and non-const overloads.
- Current caveat: division assumes the divisor raw value is not zero.

## Build / Run

- Build: `make`
- Run: `./fixed`
- Clean objects: `make clean`
- Remove executable: `make fclean`

