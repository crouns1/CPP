# CPP01 — ex04 (Sed is for losers)

## Goal
Implement a small “search and replace” tool without using `std::string::replace`, and using **C++ streams** (no C file APIs).

## Program behavior
Run:
```sh
./sed <filename> <s1> <s2>
```

It:
1. Opens `<filename>`
2. Reads its entire content
3. Replaces every occurrence of `s1` with `s2`
4. Writes the result to `<filename>.replace`

## Files
- `main.cpp`: argument validation, file I/O, error handling, writing output.
- `Replace.hpp` / `Replace.cpp`: `replaceAll()` implementation using `find()` + `substr()`.
- `tests.cpp`: simple unit-style checks for `replaceAll()`.
- `Makefile`: build `sed` and a `tests` target.

## Core concepts

### 1) C++ file I/O (no C APIs)
- Read with `std::ifstream`
- Write with `std::ofstream`
- Validate open success (`if (!in)` / `if (!out)`)

### 2) Defensive input validation
Typical rules:
- exactly 3 parameters after program name
- `filename` must not be empty
- `s1` must not be empty (otherwise searching never advances and replacement logic can loop forever)

### 3) Replacing without `std::string::replace`
The replacement algorithm is:
- search from a current position using `find(s1, pos)`
- append the unchanged part
- append `s2`
- move `pos` forward by `s1.length()`
- repeat until no more matches

This avoids modifying the original string in-place.

### 4) Complexity intuition
If the input length is $n$ and there are $k$ matches, the algorithm is linear-ish in practice, building a new output string by appending segments.

## Build / Run
```sh
make
./sed input.txt foo bar
```

Run tests:
```sh
make tests
./tests
```

## Takeaway
- Use `find()` + slicing (`substr`) to implement replacement safely.
- Always guard against empty search strings.
- Use C++ streams for file operations in this module.