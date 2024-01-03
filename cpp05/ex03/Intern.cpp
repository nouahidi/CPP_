#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern(){}

Intern::~Intern(){}

Intern::Intern(const Intern &Obj){
	*this = Obj;
}

Intern  &Intern::operator=(const Intern &Obj){
	if (this != &Obj)
		*this = Obj;
	return (*this);
}

AForm	*shrubbery(std::string target){
	AForm *f = new ShrubberyCreationForm(target);
	std::cout<<"\033[32m"<<"Intern creates shrubbery request"<<"\033[0m"<<std::endl;
	return (f);
}
AForm	*President(std::string target){
	AForm *f = new PresidentialPardonForm(target);
	std::cout<<"\033[32m"<<"Intern creates Pardon request"<<"\033[0m"<<std::endl;
	return (f);
}
AForm	*Roboto(std::string target){
	AForm *f = new RobotomyRequestForm(target);
	std::cout<<"\033[32m"<<"Intern creates robotomy request"<<"\033[0m"<<std::endl;
	return (f);
}

AForm	*Not(std::string target){
	(void)target;
	std::cout<<"\033[33m"<<"ERROR: "<<target<<" Form does not exist"<<"\033[0m"<<std::endl;
	return (NULL);
}

AForm	*Intern::makeForm(std::string FormName, std::string target){
	AForm *(*prt[])(const std::string target) = {&Roboto, &President, &shrubbery, &Not};
	std::string form[4] = {"robotomy request", "Pardon request", "shrubbery request", ""};
	int i = 0;
	while (i < 3 && FormName != form[i])
		i++;
	return (prt[i](target));
}
