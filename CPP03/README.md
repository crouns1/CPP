# CPP03 – ClapTrap Family Overview

## Core Concepts Across Exercises
- Coplien form: default ctor, copy ctor, copy assignment, destructor implemented for each class.
- Encapsulation: members kept `protected` in `ClapTrap` so derived classes can reuse stats; interface methods are public.
- Inheritance: `ScavTrap` and `FragTrap` publicly derive from `ClapTrap`, reuse its logic, and override `attack`.
- Polymorphism basics: `attack` is `virtual` in the base to allow derived overrides in later exercises.
- State management: guards prevent actions when `hitPts` or `energyPts` reach zero; actions spend energy; damage clamps hit points to zero.
- Build system: each exercise has its own `Makefile` building an `exe` binary from the local sources.

## ex00 – ClapTrap
- Class `ClapTrap` with stats: `hitPts=10`, `energyPts=10`, `attackDmg=0` by default.
- Actions: `attack(target)` spends 1 energy when alive; `takeDamage(amount)` reduces HP to a minimum of 0; `beRepaired(amount)` spends 1 energy to regain HP when alive.
- Demonstrated in `ex00/main.cpp` with two instances attacking, taking damage, repairs, and energy depletion.

## ex01 – ScavTrap (inheritance & override)
- `ScavTrap : public ClapTrap` with beefier stats: `hitPts=100`, `energyPts=50`, `attackDmg=20`.
- Overrides `attack` to customize messaging while keeping the same energy/HP checks and costs.
- Adds `guardGate()` to enter “Gate keeper” mode (state-less announcement in this implementation).
- `main.cpp` shows copy construction, assignment, repeated attacks to exhaust energy, and calling `guardGate`.

## ex02 – FragTrap (second derived class)
- `FragTrap : public ClapTrap` with stats: `hitPts=100`, `energyPts=100`, `attackDmg=30`.
- Overrides `attack` similarly to adjust output while preserving base checks.
- Adds `highFivesGuys()` to request a high-five when the unit is alive.
- `main.cpp` exercises copy, assignment, large attack loops to drain energy, repairs, and the high-five call.

## How to Build & Run
- For each exercise directory (`ex00`, `ex01`, `ex02`):
  - `make` to build `./exe` using `c++ -Wall -Wextra -Werror -std=c++98`.
  - `./exe` to run the sample scenario.
  - `make clean` removes object files; `make fclean` also removes the binary; `make re` rebuilds.

## Notes
- The base destructor is non-virtual in this code because objects are used directly (no polymorphic deletes); adding `virtual` would be a safe extension if polymorphic deletion were needed.
- Stats can be tweaked inside derived constructors if you want different balancing without touching the base class.
