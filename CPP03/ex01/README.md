# CPP03/ex01 - ScavTrap

## Issue

- Derive a `ScavTrap` class from `ClapTrap`.
- Give the derived class different stats.
- Override the attack message.
- Add a special `guardGate` behavior.

## Solve

- `ClapTrap` exposes protected state and helper accessors for derived classes.
- `ScavTrap` constructors call the `ClapTrap` constructor first.
- ScavTrap stats are set to 100 hit points, 50 energy points, and 20 attack damage.
- `ScavTrap::attack` uses the derived class name and still consumes energy.
- `guardGate` prints gate keeper mode unless the ScavTrap is destroyed.
- Copy construction and assignment reuse the `ClapTrap` copy logic.

## Build / Run

- Build: `make`
- Run: `./exe`
- Clean objects: `make clean`
- Remove executable: `make fclean`

