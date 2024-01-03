#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
	Intern someRandomIntern;
	Bureaucrat b("ouahidi", 1);
	AForm* rrf;
	rrf = someRandomIntern.makeForm("shrubbery request", "Bender");
	if (!rrf)
		return (1);
	try
	{
		rrf->beSigned(b);
		rrf->execute(b);
	}
	catch(std::exception &e){
		std::cerr <<"\033[31m"<< "Error: " << e.what()<<"\033[0m"<<std::endl;;
	}
	delete rrf;
	return 0;
}