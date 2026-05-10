#include "Bureaucrat.hpp"
#include <iostream>

int main() {
	try {
		Bureaucrat Charlos("celestial_dragon", 50);
		std::cout << Charlos << std::endl;

		Charlos.incrementGrade();
		std::cout << "After increment: " << Charlos << std::endl;

		Charlos.decrementGrade();
		std::cout << "After decrement: " << Charlos << std::endl;

		Bureaucrat bob("celestial_dragon_2", 1);
		std::cout << bob << std::endl;
		bob.incrementGrade();
	}
	catch (const std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return 0;
}
