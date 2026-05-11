#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include <iostream>

int main() {
	try {
		std::cout << "=== Testing Intern ===" << std::endl;
		Bureaucrat boss("CEO", 1);
		Intern intern;

		std::cout << "\n=== Creating Shrubbery Form ===" << std::endl;
		AForm* form1 = intern.makeForm("shrubbery creation", "home");
		if (form1) {
			boss.signForm(*form1);
			boss.executeForm(*form1);
			delete form1;
		}

		std::cout << "\n=== Creating Robotomy Form ===" << std::endl;
		AForm* form2 = intern.makeForm("robotomy request", "Bender");
		if (form2) {
			boss.signForm(*form2);
			boss.executeForm(*form2);
			delete form2;
		}

		std::cout << "\n=== Creating Presidential Pardon Form ===" << std::endl;
		AForm* form3 = intern.makeForm("presidential pardon", "Criminal");
		if (form3) {
			boss.signForm(*form3);
			boss.executeForm(*form3);
			delete form3;
		}

		std::cout << "\n=== Creating Invalid Form ===" << std::endl;
		AForm* form4 = intern.makeForm("invalid form", "target");
		if (form4) {
			delete form4;
		}

		std::cout << "\n=== All tests completed ===" << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}
