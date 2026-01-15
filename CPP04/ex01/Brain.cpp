#include "Brain.hpp"

Brain::Brain() {
	std::cout << "brain Default constructor called" << std::endl;
}

Brain::Brain(const Brain& other) {
	std::cout << "brain Copy constructor called" << std::endl;
	*this = other;
}

Brain& Brain::operator=(const Brain& other) {
	std::cout << "brain Copy assignment operator called" << std::endl;
	if (this != &other) {
		for (int i = 0; i < 100; ++i)
			this->ideas[i] = other.ideas[i];
	}
	return *this;
}

Brain::~Brain() {
	std::cout << "brain Destructor called" << std::endl;
}

void Brain::setIdea(int index, const std::string& idea) {
	if (index < 0 || index >= 100) {
		std::cout << "brain setIdea: index out of range" << std::endl;
		return;
	}
	ideas[index] = idea;
}

std::string Brain::getIdea(int index) const {
	if (index < 0 || index >= 100)
		return "";
	return ideas[index];
}
