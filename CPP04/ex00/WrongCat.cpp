#include "WrongCat.hpp"

WrongCat::WrongCat() {
	this->type = "WrongCat";
	std::cout << "wrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
	std::cout << "wrongCat Copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	std::cout << "wrongCat Copy assignment operator called" << std::endl;
	if (this != &other)
		WrongAnimal::operator=(other);
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "wrongCat Destructor called" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "wrongCat MEEOOOW" << std::endl;
}
