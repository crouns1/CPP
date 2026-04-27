# CPP00/ex00 - Megaphone

## Issue

- Build a command-line program named `megaphone`.
- Print every argument in uppercase.
- If no arguments are provided, print the required feedback-noise message.
- Stay compatible with C++98 and the local `Makefile`.

## Solve

- `main` checks `argc` before reading any argument.
- For each argument from `argv[1]` onward, the code copies it into a `std::string`.
- Lowercase ASCII letters are converted manually by subtracting `32`.
- Each converted argument is printed, followed by a final newline.
- With no arguments, the program prints `* LOUD AND UNBEARABLE FEEDBACK NOISE *`.

## Build / Run

- Build: `make`
- Run with text: `./megaphone hello world`
- Run empty case: `./megaphone`
- Clean objects: `make clean`
- Remove executable: `make fclean`

