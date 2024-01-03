#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	{
		AForm *f = new PresidentialPardonForm("ouahidi");
		Bureaucrat	b("noureddine", 5);
		try
		{
			f->beSigned(b);
			f->execute(b);
		}
		catch(std::exception &e){
			std::cerr << "Error: " <<"\033[31m"<< e.what()<<"\033[0m"<<std::endl;;
		}
		delete f;
	}
	std::cout<<"<<==========================================>>\n";
	{
		AForm *f = new ShrubberyCreationForm("ouahidi");
		Bureaucrat	b("noureddine", 14);
		try
		{
			f->beSigned(b);
			f->execute(b);
		}
		catch(std::exception &e){
			std::cerr << "Error: " <<"\033[31m"<< e.what()<<"\033[0m"<<std::endl;;
		}
		delete f;

	}
	std::cout<<"<<==========================================>>\n";
	{
		AForm *f = new RobotomyRequestForm("ouahidi");
		Bureaucrat	b("noureddine", 45);
		try
		{
			f->beSigned(b);
			f->execute(b);
		}
		catch(std::exception &e){
			std::cerr << "Error: " <<"\033[31m"<< e.what()<<"\033[0m"<<std::endl;;
		}
		delete f;
	}
	return 0;
}