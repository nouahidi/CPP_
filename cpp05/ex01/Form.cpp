#include "Form.hpp"

Form::Form() : Name("Default"), Signing(0), GradeSigne(1), GradeExecute(1){};

Form::Form(std::string Name, const int grade):Name(Name), Signing(0), GradeSigne(grade), GradeExecute(1){
	try{
		checkGrade();
	}
	catch (const std::exception &e){
		std::cerr << "Exception: " <<"\033[31m"<<getName()<<" "<< e.what() << getGradeSigne()<<"\033[0m"<<std::endl;
	}
}

Form::~Form(){}

Form::Form(const Form &Obj): Name(Obj.Name + "Copy"), GradeSigne(Obj.GradeSigne), GradeExecute(1){
	*this = Obj;
	try{
		checkGrade();
	}
	catch (const std::exception &e){
		std::cerr << "Exception: " <<"\033[31m"<<getName()<<" "<< e.what() << getGradeSigne()<<"\033[0m"<<std::endl;
	}
}

Form	&Form::operator=(const Form &Obj){
	if (this != &Obj)
		*this = Obj;
	return (*this);
}

const char*	Form::GradeTooHighException::what() const throw(){
	return ("Form: Grade Too Height !!");
}

const char*	Form::GradeTooLowException::what() const throw(){
	return ("Form: Grade Too Low !!");
}

std::string	Form::getName(){
	return (Name);
}

bool		Form::getSigning(){
	return(Signing);
}

int			Form::getGradeSigne(){
	return (GradeSigne);
}

int			Form::getGradeExecute(){
	return (GradeExecute);
}

void		Form::checkGrade(){
	if (GradeSigne < 1)
		throw GradeTooHighException();
	else if (GradeSigne > 150)
		throw GradeTooLowException();
}
void		Form::beSigned(Bureaucrat *bureaucrat){
	if (Signing)
	{
		std::cout<<"Thats Form cannot be Signed beceause it is signed"<<std::endl;
		return ;
	}
	if (bureaucrat->getGrade() < 0 || bureaucrat->getGrade() > 150){
		std::cout<<"beSigned:"<<"\033[31m"<<" Bureaucrat Grade not Valid"<<"\033[0m"<<std::endl;
		return ;
	}
	if ( GradeSigne < 0 || GradeSigne > 150){
		std::cout<<"beSigned:"<<"\033[31m"<<" Form Grade not Valid"<<"\033[0m"<<std::endl;
		return ;
	}
	if (bureaucrat->getGrade() > GradeSigne)
		throw(Bureaucrat::GradeTooLowException());
	else
	{
		Signing = 1;
		std::cout<<"beSigned:"<<"\033[32m"<<" The Form has been signed successfully"<<"\033[0m"<<std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, Form *form){
	out << "--FormInfo--\n"<<"Name = "<<form->getName()<<"\nGrade Signe = "<<\
	form->getGradeSigne()<<"\nGrade Execute = "<<form->getGradeExecute()\
	<<(form->getSigning() == 1 ? "\ntrue" : "\nfalse")<<"\n------------"<<std::endl;
	return (out);
}