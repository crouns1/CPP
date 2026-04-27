# CPP01

Pointable map of the exercises in this module.

| Exercise | Issue | Solve |
| --- | --- | --- |
| [ex00](ex00/README.md) | Compare stack and heap lifetime with a simple `Zombie` class. | Use `newZombie` for heap allocation and `randomChump` for a local object. |
| [ex01](ex01/README.md) | Allocate a group of zombies at once. | Use `new Zombie[N]`, initialize every name, then release with `delete[]`. |
| [ex02](ex02/README.md) | Show the difference between a pointer and a reference. | Print addresses and values for one string, one pointer, and one reference. |
| [ex03](ex03/README.md) | Model mandatory versus optional weapon ownership. | Store a `Weapon&` in `HumanA` and a nullable `Weapon*` in `HumanB`. |
| [ex04](ex04/README.md) | Replace text in a file without C file APIs. | Read the file into a string, replace every match, and write `<filename>.replace`. |
| [ex05](ex05/README.md) | Dispatch complaint levels to private methods. | Use a pointer-to-member-function selected from the requested level. |

