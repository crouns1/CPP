#include "Animal.hpp"

Animal::Animal() : type("Animal") {
	std::cout << "animal Default constructor called" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type) {
	std::cout << "animal Copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
	std::cout << "animal Copy assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

Animal::~Animal() {
	std::cout << "animal Destructor called" << std::endl;
}

std::string Animal::getType() const {
	return this->type;
}

void Animal::makeSound() const {
	std::cout << "animal sound" << std::endl;
}
