# CPP01 — ex02 (ThisIsBrain)

## Goal
Understand **pointers vs references**: what they store, how to access values, and how addresses relate.

## Files
- `main.cpp`: demonstrates a string, a pointer to it, and a reference to it.

## Core concepts

### 1) The original object
```cpp
std::string str = "This is a brain";
```
`str` is a normal variable that owns its value.

### 2) Pointer (`T*`)
```cpp
std::string* stringPTR = &str;
```
- A pointer stores an **address**.
- It can be reassigned to point elsewhere.
- It can be `NULL` / `0` (in C++98), meaning “points to nothing”.

Accessing the pointed value:
```cpp
*stringPTR
```

### 3) Reference (`T&`)
```cpp
std::string& stringREF = str;
```
- A reference is an **alias** to an existing object.
- It must be initialized immediately.
- It cannot be null and cannot be reseated to another object.

### 4) Addresses and values
- `&str` is the address of the object.
- `stringPTR` prints as an address (because it *is* an address).
- `&stringREF` is the same address as `&str` (because it refers to the same object).

## Build / Run
```sh
make
./ThisIsBrain
```

## Takeaway
- Pointer = “I store an address (maybe empty)”.
- Reference = “I am another name for an existing object”.