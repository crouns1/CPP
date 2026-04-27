# CPP01/ex03 - Unnecessary Violence

## Issue

- Model two humans that attack with a shared `Weapon`.
- Show when a reference is appropriate and when a pointer is appropriate.
- Make weapon type changes visible to both the weapon owner and the attacker.

## Solve

- `Weapon` stores a mutable `type` and exposes it through `getType`.
- `HumanA` receives a weapon at construction and stores it as a `Weapon&`, because it is always armed.
- `HumanB` starts without a weapon and stores a nullable `Weapon*`, because it may be armed later.
- `setWeapon` points `HumanB` at an existing weapon.
- When `Weapon::setType` changes the weapon, both humans print the updated type because they refer to the same object.

## Build / Run

- Build: `make`
- Run: `./violence`
- Clean objects: `make clean`
- Remove executable: `make fclean`

