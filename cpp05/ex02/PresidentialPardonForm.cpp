#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Default", 25, 5){}

PresidentialPardonForm::PresidentialPardonForm(std::string Name) : AForm(Name, 25, 5){}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &Obj) : AForm(Obj){}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &Obj){
	if (this != &Obj)
		*this = Obj;
	return (*this);
}
const char *PresidentialPardonForm::Unsigned::what()const throw(){
	return ("Unsigned Form !!");
}

void PresidentialPardonForm::beSigned(Bureaucrat const & executor){
	if (getSigning()){
		std::cout<<"PresidentialPardonForm: Thats Form cannot be Signed beceause it is signed"<<std::endl;
		return ;
	}
	if (executor.getGrade() > getGradeSigne())
		throw(Bureaucrat::GradeTooLowException());
	else if (executor.getGrade() < 0 || executor.getGrade() > 150){
		std::cout<<"beSigned:"<<"\033[31m"<<" Bureaucrat Grade not Valid"<<"\033[0m"<<std::endl;
		return ;
	}
	else{
		setSigning(1);
		std::cout << "\033[33m"<< "PresidentialPardonForm: Signed by " \
		<< executor.getName() << "\033[0m" << std::endl;
	}
}
void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!getSigning()){
		throw(Unsigned());
	}
	else if ((const int)(executor.getGrade()) > getGradeExecute())
		throw(Bureaucrat::GradeTooLowException());
	else
		std::cout<<"\033[32m"<<"Informs that "<<executor.getName()<<" has been pardoned by Zaphod Beeblebrox."<<"\033[0m"<<std::endl;
}