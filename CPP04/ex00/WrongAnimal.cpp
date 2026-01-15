#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
	std::cout << "wrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) {
	std::cout << "wrongAnimal Copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	std::cout << "wrongAnimal Copy assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "wrongAnimal Destructor called" << std::endl;
}

std::string WrongAnimal::getType() const {
	return this->type;
}

void WrongAnimal::makeSound() const {
	std::cout << "wrongAnimal *wrong generic sound*" << std::endl;
}
