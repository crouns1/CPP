# CPP01/ex04 - Sed Is For Losers

## Issue

- Build a small file replacement program named `sed`.
- Accept exactly three arguments: a filename, `s1`, and `s2`.
- Replace every occurrence of `s1` with `s2`.
- Write the result to `<filename>.replace`.
- Avoid C-style file manipulation functions.

## Solve

- `main` validates the argument count, filename, and non-empty `s1`.
- The input file is opened with `std::ifstream`.
- The whole file is read character by character into a `std::string`.
- `replaceAll` uses `std::string::find` and `substr` to append unchanged chunks and replacements.
- The output is written with `std::ofstream` to the `.replace` file.
- Read and write errors return a printed error message and a non-zero status.

## Build / Run

- Build: `make`
- Run: `./sed file.txt old new`
- Output file: `file.txt.replace`
- Clean objects: `make clean`
- Remove executable: `make fclean`

