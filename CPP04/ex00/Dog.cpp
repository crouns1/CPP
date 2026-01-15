#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	std::cout << "dog Default constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
	std::cout << "dog Copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "dog Copy assignment operator called" << std::endl;
	if (this != &other)
		Animal::operator=(other);
	return *this;
}

Dog::~Dog() {
	std::cout << "dog Destructor called" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "dog Woof!" << std::endl;
}
