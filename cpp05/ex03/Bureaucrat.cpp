#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(){}
Bureaucrat::Bureaucrat(std::string Name, int Grade):Name(Name), Grade(Grade){
	try {
		CheckRange();
	}
	catch (const std::exception &e) {
		std::cerr <<getName()<< " Exception: " << e.what() << getGrade()<<std::endl;
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
std::string	Bureaucrat::getName(void)const {
	return (Name);
}
int			Bureaucrat::getGrade(void) const{
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

void	Bureaucrat::executeForm(AForm const & form) {
	form.execute(*this);
}

std::ostream& operator<<(std::ostream &out, Bureaucrat* bureaucrat){
	out<<"--BureaucratInfo--\n"<<"Name= "<<bureaucrat->getName()<<\
	"\nGrade= "<<bureaucrat->getGrade()\
	<<"\n------------------"<<std::endl;
	return (out);
}