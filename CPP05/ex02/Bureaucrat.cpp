#include "Bureaucrat.hpp"
#include "AForm.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade too low";
}

void Bureaucrat::little_check_grade(int grade_x) {
	if (grade_x < 1) 
		throw GradeTooHighException();
	if (grade_x > 150) 
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name), grade(grade) {
	little_check_grade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade)
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other)
	{
		this->grade = other.grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat() {}

const std::string& Bureaucrat::getName() const {
	return name;
}

int Bureaucrat::getGrade() const {
	return grade;
}

void Bureaucrat::incrementGrade() {
	little_check_grade(grade - 1);
	--grade;
}

void Bureaucrat::decrementGrade() {
	little_check_grade(grade + 1);
	++grade;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b) {
	os << b.getName() << " bureaucrat grade " << b.getGrade();
	return os;
}

void Bureaucrat::signForm(AForm& form) {
	try {
		form.beSigned(*this);
		std::cout << getName() << " signed " << form.getName() << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << getName() << " couldn't sign " << form.getName() 
		          << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(const AForm& form) {
	try {
		form.execute(*this);
		std::cout << getName() << " executed " << form.getName() << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << getName() << " couldn't execute " << form.getName() 
		          << " because " << e.what() << std::endl;
	}
}
