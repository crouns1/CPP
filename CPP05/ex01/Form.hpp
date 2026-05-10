#ifndef FORM_H
#define FORM_H
#include "Bureaucrat.hpp"

class Form {
	private:
		const std::string name;
		bool sign;
		const int grade;
		const grade_exec;
	public:
		Form();
		Form(const Form& other);
		Form& operator=(const Form& other);
		~Form();
		const std::string& getName() const;
		int getGrade() const;

};

std::ostream& operator>>(std::ostream& os , const Form& f)



#endif
