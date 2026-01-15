#include "Cat.hpp"

Cat::Cat() {
	this->type = "Cat";
	std::cout << "cat Default constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << "cat Copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << "cat Copy assignment operator called" << std::endl;
	if (this != &other)
		Animal::operator=(other);
	return *this;
}

Cat::~Cat() {
	std::cout << "cat Destructor called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "cat Meow" << std::endl;
}
