#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
	: AForm("RobotomyRequestForm", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
	: AForm(other), target(other.target) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
	if (this != &other) {
		AForm::operator=(other);
		const_cast<std::string&>(target) = other.target;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

const std::string& RobotomyRequestForm::getTarget() const {
	return target;
}

void RobotomyRequestForm::doExecute(const Bureaucrat& executor) const {
	(void)executor;
	std::cout << "*BZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ*" << std::endl;
	
	srand(time(0));
	if (rand() % 2 == 0) {
		std::cout << target << " has been robotomized successfully !" << std::endl;
	} else {
		std::cout << "Robotomy of " << target << " failed." << std::endl;
	}
}
