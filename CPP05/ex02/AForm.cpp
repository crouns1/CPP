#include "AForm.hpp"

const char* AForm::GradeTooHighException::what() const throw() {
	return "Grade too high";
}

const char* AForm::GradeTooLowException::what() const throw() {
	return "Grade too low";
}

void AForm::checkGrade(int grade) const {
	if (grade < 1)
		throw AForm::GradeTooHighException();
	if (grade > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm() : name("Default"), isSigned(false), gradeToSign(150), gradeToExecute(150) {}

AForm::AForm(const std::string& name, int gradeToSign, int gradeToExecute)
	: name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) {
	checkGrade(gradeToSign);
	checkGrade(gradeToExecute);
}

AForm::AForm(const AForm& other)
	: name(other.name), isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute) {}

AForm& AForm::operator=(const AForm& other) {
	if (this != &other) {
		const_cast<std::string&>(name) = other.name;
		isSigned = other.isSigned;
		const_cast<int&>(gradeToSign) = other.gradeToSign;
		const_cast<int&>(gradeToExecute) = other.gradeToExecute;
	}
	return *this;
}

AForm::~AForm() {}

const std::string& AForm::getName() const {
	return name;
}

bool AForm::getIsSigned() const {
	return isSigned;
}

int AForm::getGradeToSign() const {
	return gradeToSign;
}

int AForm::getGradeToExecute() const {
	return gradeToExecute;
}

void AForm::beSigned(const Bureaucrat& b) {
	if (b.getGrade() > gradeToSign)
		throw AForm::GradeTooLowException();
	isSigned = true;
}

void AForm::execute(const Bureaucrat& executor) const {
	if (!isSigned)
		throw std::runtime_error("Form is not signed");
	if (executor.getGrade() > gradeToExecute)
		throw AForm::GradeTooLowException();
	doExecute(executor);
}

std::ostream& operator<<(std::ostream& os, const AForm& f) {
	os << "Form: " << f.getName() 
	   << ", Signed: " << (f.getIsSigned() ? "Yes" : "No")
	   << ", Grade to sign: " << f.getGradeToSign()
	   << ", Grade to execute: " << f.getGradeToExecute();
	return os;
}
