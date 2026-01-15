#include "Dog.hpp"

Dog::Dog() : brain(new Brain()) {
	this->type = "Dog";
	std::cout << "dog Default constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other), brain(new Brain(*other.brain)) {
	std::cout << "dog Copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "dog Copy assignment operator called" << std::endl;
	if (this != &other) {
		Animal::operator=(other);
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return *this;
}

Dog::~Dog() {
	std::cout << "dog Destructor called" << std::endl;
	delete this->brain;
}

void Dog::makeSound() const {
	std::cout << "dog Woof!" << std::endl;
}

void Dog::setIdea(int index, const std::string& idea) {
	this->brain->setIdea(index, idea);
}

std::string Dog::getIdea(int index) const {
	return this->brain->getIdea(index);
}
