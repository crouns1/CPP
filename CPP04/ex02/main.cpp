#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	dog->makeSound();
	cat->makeSound();
	delete dog;
	delete cat;

	Animal* animals[4];
	for (int i = 0; i < 2; ++i)
		animals[i] = new Dog();
	for (int i = 2; i < 4; ++i)
		animals[i] = new Cat();
	for (int i = 0; i < 4; ++i)
		delete animals[i];

	Dog d1;
	d1.setIdea(0, "Guard the house");
	Dog d2(d1);
	d1.setIdea(0, "Eat treats");
	std::cout << d1.getIdea(0) << std::endl;
	std::cout << d2.getIdea(0) << std::endl;

	Cat c1;
	c1.setIdea(0, "Stare at wall");
	Cat c2;
	c2 = c1;
	c1.setIdea(0, "Sprint at 3AM");
	std::cout << c1.getIdea(0) << std::endl;
	std::cout << c2.getIdea(0) << std::endl;

	return 0;
}
