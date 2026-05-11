#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main() {
	try {
		std::cout << "=== Testing Bureaucrat ===" << std::endl;
		Bureaucrat boss("CEO", 1);
		Bureaucrat intern("Intern", 150);
		
		std::cout << boss << std::endl;
		std::cout << intern << std::endl;

		std::cout << "\n=== Testing ShrubberyCreationForm ===" << std::endl;
		ShrubberyCreationForm shrubbery("home");
		std::cout << shrubbery << std::endl;
		
		boss.signForm(shrubbery);
		boss.executeForm(shrubbery);

		std::cout << "\n=== Testing RobotomyRequestForm ===" << std::endl;
		RobotomyRequestForm robotomy("Bender");
		boss.signForm(robotomy);
		boss.executeForm(robotomy);

		std::cout << "\n=== Testing PresidentialPardonForm ===" << std::endl;
		PresidentialPardonForm pardon("Marvin");
		boss.signForm(pardon);
		boss.executeForm(pardon);

		std::cout << "\n=== Testing with insufficient grade ===" << std::endl;
		ShrubberyCreationForm shrubbery2("garden");
		intern.signForm(shrubbery2);
		boss.signForm(shrubbery2);
		intern.executeForm(shrubbery2);

		std::cout << "\n=== Testing unsigned form execution ===" << std::endl;
		PresidentialPardonForm pardon2("Criminal");
		intern.executeForm(pardon2);
	}
	catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}
