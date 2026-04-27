# CPP03/ex02 - FragTrap

## Issue

- Add a second derived class, `FragTrap`, alongside `ScavTrap`.
- Keep using the shared `ClapTrap` base behavior.
- Give FragTrap its own stats and special behavior.

## Solve

- `FragTrap` inherits from `ClapTrap`.
- FragTrap stats are set to 100 hit points, 100 energy points, and 30 attack damage.
- `FragTrap::attack` checks hit points and energy points, then spends energy and prints a FragTrap-specific message.
- `highFivesGuys` requests a positive high five unless the object is destroyed.
- `main` tests both `ScavTrap` and `FragTrap` in separate scopes, making constructor/destructor order visible.

## Build / Run

- Build: `make`
- Run: `./exe`
- Clean objects: `make clean`
- Remove executable: `make fclean`

