# C++ Modules

This repository contains C++ module exercises focused on learning the language step by step: basic syntax, classes, memory management, operator overloads, inheritance, polymorphism, deep copies, and abstract classes.

Each module has its own README, and each exercise folder has a focused README that defines:

- the issue the exercise solves
- the implementation approach
- how to build and run it

## Modules

| Module | Main topic | README |
| --- | --- | --- |
| `CPP00` | C++ basics, strings, I/O, simple classes | [CPP00/README.md](CPP00/README.md) |
| `CPP01` | Memory allocation, references, pointers, file streams | [CPP01/README.md](CPP01/README.md) |
| `CPP02` | Orthodox Canonical Form and fixed-point numbers | [CPP02/README.md](CPP02/README.md) |
| `CPP03` | Inheritance with `ClapTrap`, `ScavTrap`, and `FragTrap` | [CPP03/README.md](CPP03/README.md) |
| `CPP04` | Polymorphism, deep copies, and abstract classes | [CPP04/README.md](CPP04/README.md) |

## Exercise Map

| Exercise | Description |
| --- | --- |
| [CPP00/ex00](CPP00/ex00/README.md) | Megaphone: uppercase command-line arguments. |
| [CPP00/ex01](CPP00/ex01/README.md) | PhoneBook: fixed-size interactive contact manager. |
| [CPP01/ex00](CPP01/ex00/README.md) | Zombie: stack vs heap object lifetime. |
| [CPP01/ex01](CPP01/ex01/README.md) | Zombie Horde: array allocation with `new[]` and `delete[]`. |
| [CPP01/ex02](CPP01/ex02/README.md) | This Is Brain: pointers and references. |
| [CPP01/ex03](CPP01/ex03/README.md) | Unnecessary Violence: references, pointers, and shared objects. |
| [CPP01/ex04](CPP01/ex04/README.md) | Sed replacement: file input/output and string replacement. |
| [CPP01/ex05](CPP01/ex05/README.md) | Harl: member-function pointer dispatch. |
| [CPP02/ex00](CPP02/ex00/README.md) | Fixed: canonical class form and raw fixed-point bits. |
| [CPP02/ex01](CPP02/ex01/README.md) | Fixed conversion: integer, float, and stream output. |
| [CPP02/ex02](CPP02/ex02/README.md) | Fixed operators: arithmetic, comparisons, increment, min/max. |
| [CPP03/ex00](CPP03/ex00/README.md) | ClapTrap: basic state and actions. |
| [CPP03/ex01](CPP03/ex01/README.md) | ScavTrap: derived class with custom stats and behavior. |
| [CPP03/ex02](CPP03/ex02/README.md) | FragTrap: second derived class and high-five action. |
| [CPP04/ex00](CPP04/ex00/README.md) | Polymorphism: virtual behavior versus non-virtual behavior. |
| [CPP04/ex01](CPP04/ex01/README.md) | Deep copy: `Brain` ownership in `Dog` and `Cat`. |
| [CPP04/ex02](CPP04/ex02/README.md) | Abstract class: pure virtual `Animal::makeSound`. |

## Build

Each exercise is built from its own folder:

```sh
cd CPP00/ex00
make
./megaphone hello world
```

Common Makefile commands:

- `make` builds the exercise.
- `make clean` removes object files.
- `make fclean` removes object files and the executable.
- `make re` rebuilds from scratch.

## Standard

The exercises are written for C++98 and are compiled with:

```sh
c++ -Wall -Wextra -Werror -std=c++98
```
