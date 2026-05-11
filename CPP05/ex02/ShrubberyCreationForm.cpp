#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	: AForm("ShrubberyCreationForm", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
	: AForm(other), target(other.target) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
	if (this != &other) {
		AForm::operator=(other);
		const_cast<std::string&>(target) = other.target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

const std::string& ShrubberyCreationForm::getTarget() const {
	return target;
}

void ShrubberyCreationForm::doExecute(const Bureaucrat& executor) const {
	(void)executor;
	std::string filename = target + "_shrubbery";
	std::ofstream outfile(filename.c_str());
	
	if (!outfile.is_open())
		throw std::runtime_error("Failed to create file");

	outfile << "    _-_" << std::endl;
	outfile << "   /(-_\\)" << std::endl;
	outfile << "  /\\`o_o`/" << std::endl;
	outfile << "  \\_/ \\_/" << std::endl;
	outfile << "   |   |" << std::endl;
	outfile << "  /|   |\\" << std::endl;
	outfile << "    | |" << std::endl;
	outfile << "   /| |\\" << std::endl;
	outfile << "    | |" << std::endl;
	
	outfile.close();
}
