#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():Name("ouahidi"), Grade(1){}

Bureaucrat::Bureaucrat(std::string Name, int Grade):Name(Name), Grade(Grade){
	try {
		CheckRange();
	}
	catch (std::exception & e) {
		std::cerr <<"\033[31m"<< "Exception: " << e.what() << getGrade()<<"\033[0m"<<std::endl;
	}
}
Bureaucrat::~Bureaucrat(){}
Bureaucrat::Bureaucrat(const Bureaucrat &Obj){
	*this = Obj;
	try {
		CheckRange();
	}
	catch (std::exception & e) {
		std::cerr <<"\033[31m"<< "Exception: " << e.what() << getGrade()<<"\033[0m"<<std::endl;
	}
}
Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &Obj){
	if (this != &Obj)
		*this = Obj;
	return (*this);
}
const char *Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Grade Is Too Height! ");
}
const char *Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Grade Is Too Low! ");
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
void		Bureaucrat::CheckRange(void)const{
	if (Grade < 1)
		throw GradeTooHighException();
	else if (Grade > 150)
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream &out, Bureaucrat* bureaucrat){
	out<<"\033[33m"<<bureaucrat->getName()<<", bureaucrat grade "<<bureaucrat->getGrade()<<"\033[0m"<<std::endl;
	return (out);
}