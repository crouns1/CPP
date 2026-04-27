# CPP03/ex00 - ClapTrap

## Issue

- Implement a `ClapTrap` class with game-like state.
- Track name, hit points, energy points, and attack damage.
- Prevent actions when the object has no hit points or no energy.
- Demonstrate construction, copy, assignment, and destruction.

## Solve

- Constructors initialize `ClapTrap` with 10 hit points, 10 energy points, and 0 attack damage.
- `attack` checks hit points and energy points, then spends 1 energy point.
- `takeDamage` lowers hit points and clamps them to 0 when damage is fatal.
- `beRepaired` checks hit points and energy points, then spends 1 energy point and restores hit points.
- Copy construction and assignment duplicate the stored state.
- `main` exercises normal actions, energy exhaustion, and destroyed-object behavior.

## Build / Run

- Build: `make`
- Run: `./exe`
- Clean objects: `make clean`
- Remove executable: `make fclean`

