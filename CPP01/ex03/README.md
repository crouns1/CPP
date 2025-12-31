# CPP01 — ex03 (Unnecessary violence)

## Goal
Learn **composition by reference/pointer**, object **lifetime rules**, and why references vs pointers matter in class design.

## Files
- `Weapon.hpp` / `Weapon.cpp`: `Weapon` stores a `std::string type` with `getType()` and `setType()`.
- `HumanA.hpp` / `HumanA.cpp`: `HumanA` holds a **reference** to a `Weapon` (always armed).
- `HumanB.hpp` / `HumanB.cpp`: `HumanB` holds a **pointer** to a `Weapon` (can be unarmed).
- `main.cpp`: demonstrates both humans and weapon type changes.

## Core concepts

### 1) Reference member (HumanA)
`HumanA` stores:
- `Weapon& weapon;`

Meaning:
- It MUST be initialized in the constructor initializer list.
- It can never be “no weapon”.
- It always refers to a valid `Weapon` (as long as that weapon still exists).

### 2) Pointer member (HumanB)
`HumanB` stores:
- `Weapon* weapon;`

Meaning:
- It can start as `NULL` to represent “unarmed”.
- `setWeapon()` assigns the address of an existing `Weapon`.
- `attack()` must check for null before using `weapon->getType()`.

### 3) Ownership vs borrowing
Neither `HumanA` nor `HumanB` owns the weapon:
- They **borrow** it.
- The `Weapon` object must outlive the humans while they use it.

### 4) Observing shared state
Both humans refer to the same `Weapon` object.
When `Weapon::setType()` changes the internal string, the next `attack()` prints the updated type.

## Build / Run
```sh
make
./violence
```

## Takeaway
- Use a reference when the relationship is mandatory (always present).
- Use a pointer when the relationship is optional (may be absent) or can change later.
- Always think about object lifetime when storing references/pointers.

8. Final Mental Model (Memorize This)

Value → I own it

Reference → I require it

Pointer → I might use it