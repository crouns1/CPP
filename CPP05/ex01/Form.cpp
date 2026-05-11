#include "Form.hpp"

const char* Form::GradeTooHighException::what() const throw() {
	return "Grade too high";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Grade too low";
}

static void checkGrade(int grade) {
	if (grade < 1)
		throw Form::GradeTooHighException();
	if (grade > 150)
		throw Form::GradeTooLowException();
}

Form::Form() : name("Default"), isSigned(false), gradeToSign(150), gradeToExecute(150) {}

Form::Form(const std::string& name, int gradeToSign, int gradeToExecute)
	: name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) {
	checkGrade(gradeToSign);
	checkGrade(gradeToExecute);
}

Form::Form(const Form& other)
	: name(other.name), isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute) {}

Form& Form::operator=(const Form& other) {
	if (this != &other) {
		const_cast<std::string&>(name) = other.name;
		isSigned = other.isSigned;
		const_cast<int&>(gradeToSign) = other.gradeToSign;
		const_cast<int&>(gradeToExecute) = other.gradeToExecute;
	}
	return *this;
}

Form::~Form() {}

const std::string& Form::getName() const {
	return name;
}

bool Form::getIsSigned() const {
	return isSigned;
}

int Form::getGradeToSign() const {
	return gradeToSign;
}

int Form::getGradeToExecute() const {
	return gradeToExecute;
}

void Form::beSigned(const Bureaucrat& b) {
	if (b.getGrade() > gradeToSign)
		throw Form::GradeTooLowException();
	isSigned = true;
}

std::ostream& operator<<(std::ostream& os, const Form& f) {
	os << "Form: " << f.getName() 
	   << ", Signed: " << (f.getIsSigned() ? "Yes" : "No")
	   << ", Grade to sign: " << f.getGradeToSign()
	   << ", Grade to execute: " << f.getGradeToExecute();
	return os;
}
