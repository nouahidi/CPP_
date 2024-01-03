#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : Name("Predator"), Grade(1){}
Bureaucrat::Bureaucrat(std::string Name, int Grade):Name(Name), Grade(Grade){
	try {
		CheckRange();
	}
	catch (const std::exception &e) {
		std::cerr <<getName()<< " Exception: " <<"\033[31m"<< e.what() << getGrade()<<"\033[0m"<<std::endl;
	}
}
Bureaucrat::~Bureaucrat(){}
Bureaucrat::Bureaucrat(const Bureaucrat &Obj){
	*this = Obj;
	try {
		CheckRange();
	}
	catch (Bureaucrat::GradeTooHighException& e) {
		std::cerr << "Exception: " << e.what() << getGrade()<<std::endl;
	}
}
Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &Obj){
	if (this != &Obj)
		*this = Obj;
	return (*this);
}
const char *Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Grade Is Too Height!");
}
const char *Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Grade Is Too Low!");
}
std::string	Bureaucrat::getName(void){
	return (Name);
}
int			Bureaucrat::getGrade(void){
	return (Grade);
}
void		Bureaucrat::IncrementGrade(void){
	Grade--;
	CheckRange();
}
void		Bureaucrat::DecrementGrade(void){
	Grade++;
	CheckRange();
}
void	Bureaucrat::CheckRange(void)const{
	if (Grade < 1)
		throw GradeTooHighException();
	else if (Grade > 150)
		throw GradeTooLowException();
}
void	Bureaucrat::signForm(Form *f){
	if (f->getSigning())
		std::cout<<"signForm: "<<"\033[32m"<<Name<< " signed " << f->getName()<<"\033[0m"<<std::endl;
	else
	{
		if (Grade < 1 || Grade > 150) {
			std::cout<<"signForm: "<<"\033[31m"<<Name<< " couldn't sign " << f->getName()<<\
			" because The Bureaucrat Grade is not limited to between 1 and 150"<<"\033[0m"<<std::endl;
			return ;
		}
		if (Grade > f->getGradeSigne())
			throw GradeTooLowException();
		else if (f->getGradeSigne() < 0 || f->getGradeSigne() > 150)
			std::cout<<"\033[31m"<<Name<< " couldn't sign " << f->getName()<<" Form Grade not Valid"<<"\033[0m"<<std::endl;
		else
			std::cout<<"\033[31m"<<Name<< " couldn't sign " << f->getName()<<" The Bureaucrat was not offered to sign the Form"<<"\033[0m"<<std::endl;
	}
}
std::ostream& operator<<(std::ostream &out, Bureaucrat* bureaucrat){
	out<<"--BureaucratInfo--\n"<<"Name= "<<bureaucrat->getName()<<\
	"\nGrade= "<<bureaucrat->getGrade()\
	<<"\n------------------"<<std::endl;
	return (out);
}