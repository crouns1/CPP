#include "WrongCat.hpp"

WrongCat::WrongCat() {
	this->type = "WrongCat";
	std::cout << "wrongcat Default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
	std::cout << "wrongcat Copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	std::cout << "wrongcat Copy assignment operator called" << std::endl;
	if (this != &other)
		WrongAnimal::operator=(other);
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "wrongcat Destructor called" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "wrongcat MEEOOOW" << std::endl;
}
