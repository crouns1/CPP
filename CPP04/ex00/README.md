# CPP04/ex00 - Polymorphism

## Issue

- Demonstrate polymorphism through a base `Animal` pointer.
- Show why virtual methods matter.
- Compare correct polymorphic behavior with a deliberately wrong base class.

## Solve

- `Animal` stores a `type`, has a virtual destructor, and declares `makeSound` as virtual.
- `Dog` and `Cat` inherit from `Animal`, set their own `type`, and override `makeSound`.
- Calling `makeSound` through an `Animal*` dispatches to the real object type.
- `WrongAnimal` does not make `makeSound` virtual.
- Calling `makeSound` through a `WrongAnimal*` to a `WrongCat` uses the base implementation, demonstrating the problem.
- Current caveat: deleting derived objects through a base with a non-virtual destructor is not safe outside a controlled demo.

## Build / Run

- Build: `make`
- Run: `./ex00`
- Clean objects: `make clean`
- Remove executable: `make fclean`

