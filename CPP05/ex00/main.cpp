#include "Bureaucrat.hpp"

static void	tryCreate(const std::string& name, int grade)
{
	try
	{
		Bureaucrat	bureaucrat(name, grade);

		std::cout << "Created: " << bureaucrat << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Could not create " << name << ": "
			<< e.what() << std::endl;
	}
}

int	main(void)
{
	tryCreate("Alice", 1);
	tryCreate("Bob", 75);
	tryCreate("Too High", 0);
	tryCreate("Too Low", 151);

	std::cout << std::endl;

	try
	{
		Bureaucrat	jim("Jim", 3);

		std::cout << jim << std::endl;
		jim.incrementGrade();
		std::cout << "After increment: " << jim << std::endl;
		jim.decrementGrade();
		std::cout << "After decrement: " << jim << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Jim error: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat	boss("Boss", 1);

		std::cout << boss << std::endl;
		boss.incrementGrade();
	}
	catch (std::exception& e)
	{
		std::cout << "Boss error: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat	intern("Intern", 150);

		std::cout << intern << std::endl;
		intern.decrementGrade();
	}
	catch (std::exception& e)
	{
		std::cout << "Intern error: " << e.what() << std::endl;
	}

	return (0);
}
