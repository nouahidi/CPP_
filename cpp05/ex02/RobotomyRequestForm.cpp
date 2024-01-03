#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>
RobotomyRequestForm::RobotomyRequestForm() : AForm("Default", 72, 45){}

RobotomyRequestForm::RobotomyRequestForm(std::string Name) : AForm(Name, 72, 45) {}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &Obj) : AForm(Obj) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &Obj)
{
	if (this != &Obj)
		*this = Obj;
	return (*this);
}

const char *RobotomyRequestForm::Unsigned::what() const throw()
{
	return ("Unsigned Form !!");
}

void RobotomyRequestForm::beSigned(Bureaucrat const & executor)
{
	if (getSigning())
	{
		std::cout << "RobotomyRequestForm: Thats Form cannot be Signed beceause it is signed" << std::endl;
		return;
	}
	if (executor.getGrade() > getGradeSigne())
		throw(Bureaucrat::GradeTooLowException());
	else
	{
		setSigning(1);
		std::cout << "\033[33m"
				  << "RobotomyRequestForm: Signed by " << executor.getName() << "\033[0m" << std::endl;
	}
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!getSigning())
		throw(Unsigned());
	else if (executor.getGrade() > getGradeExecute())
		throw(Bureaucrat::GradeTooLowException());
	else
	{
		std::srand(std::time(0));
		std::cout << "Makes some drilling noises..." << std::endl;
		bool success = (std::rand() % 2 == 0);
		success ? std::cout <<"\033[32m"<< "Informs that " << executor.getName() << \
		" has been robotomized successfully!" <<"\033[0m"<< std::endl : std::cout <<"\033[34m"<< "Informs that the robotomy failed." <<"\033[0m"<< std::endl;
	}
}