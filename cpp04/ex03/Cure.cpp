#include "Cure.hpp"

Cure::Cure(){
	std::cout<<"Cure: Default Constructor Called"<<std::endl;
	type = "cure";
}
Cure::Cure(const Cure & Obj){
	std::cout<<"Cure: Copy Constructor Called"<<std::endl;
	*this = Obj;
}
Cure::~Cure(){
	std::cout<<"Cure: Default Constructor Called"<<std::endl;
}
Cure	&Cure::operator=(const Cure & Obj){
	if (this != &Obj)
		this->type = Obj.type;
	return (*this);
}
Cure	*Cure::clone(void)const{
	Cure *cure = new Cure;
	return (cure);
}
std::string	const &Cure::getType(void)const{
	return (type);
}
void	Cure::use(ICharacter& Name){
	std::cout<<"heals "<<Name.getName()<<"'s wounds"<<std::endl;
}