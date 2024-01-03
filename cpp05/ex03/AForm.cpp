#include "AForm.hpp"

AForm::AForm() : Name("Default"), Signing(false), GradeSigne(1), GradeExecute(1){}
AForm::AForm(std::string Name, int GradeSigne, int GradeExecute): Name(Name), Signing(false), GradeSigne(GradeSigne), GradeExecute(GradeExecute){}
AForm::~AForm(){}
AForm::AForm(const AForm &Obj): Name(Obj.Name), Signing(Obj.Signing), GradeSigne(Obj.GradeSigne), GradeExecute(Obj.GradeExecute){}

AForm	&AForm::operator=(const AForm &Obj){
	if (this != &Obj)
		*this = Obj;
	return (*this);
}

std::string	AForm::getName(){
	return (Name);
}

bool		AForm::getSigning() const{
	return (Signing);
}

int			AForm::getGradeExecute()const {
	return (GradeExecute);
}

int			AForm::getGradeSigne(){
	return (GradeSigne);
}
void		AForm::setSigning(bool sg){
	Signing = sg;
}
std::ostream &operator<<(std::ostream &out, AForm *form){
	out << "--FormInfo--\n"<<"Name = "<<form->getName()<<"\nGrade Signe = "<<\
	form->getGradeSigne()<<"\nGrade Execute = "<<form->getGradeExecute()\
	<<(form->getSigning() == 1 ? "\ntrue" : "\nfalse")<<"\n------------"<<std::endl;
	return (out);
}