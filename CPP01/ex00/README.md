# CPP01/ex00 - Zombie

## Issue

- Demonstrate the difference between dynamic allocation and automatic allocation.
- Implement a `Zombie` class that can announce itself.
- Provide `newZombie` for heap-created zombies and `randomChump` for stack-created zombies.
- Make object lifetime visible through constructor and destructor messages.

## Solve

- `Zombie` stores its name and prints messages when created, destroyed, and announced.
- `newZombie` allocates a `Zombie` with `new`, announces it, and returns the pointer to the caller.
- `randomChump` creates a local `Zombie`, announces it, and lets it be destroyed automatically at function exit.
- `main` deletes the dynamic zombie, showing the manual cleanup path.

## Build / Run

- Build: `make`
- Run: `./zombie`
- Clean objects: `make clean`
- Remove executable: `make fclean`

