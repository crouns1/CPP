#include "Cat.hpp"

Cat::Cat() : brain(new Brain()) {
	this->type = "Cat";
	std::cout << "cat Default constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other), brain(new Brain(*other.brain)) {
	std::cout << "cat Copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << "cat Copy assignment operator called" << std::endl;
	if (this != &other) {
		Animal::operator=(other);
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return *this;
}

Cat::~Cat() {
	std::cout << "cat Destructor called" << std::endl;
	delete this->brain;
}

void Cat::makeSound() const {
	std::cout << "cat Meow" << std::endl;
}

void Cat::setIdea(int index, const std::string& idea) {
	this->brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) const {
	return this->brain->getIdea(index);
}
