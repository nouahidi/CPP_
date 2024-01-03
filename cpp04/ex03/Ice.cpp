#include "Ice.hpp"

Ice::Ice(){
	std::cout<<"Ice: Default Constructor Called"<<std::endl;
	type = "ice";
}
Ice::Ice(const Ice & Obj){
	std::cout<<"Ice: Copy Constructor Called"<<std::endl;
	*this = Obj;
}
Ice::~Ice(){
	std::cout<<"Ice: Default Constructor Called"<<std::endl;
}
Ice	&Ice::operator=(const Ice & Obj){
	if (this != &Obj)
		this->type = Obj.type;
	return (*this);
}
Ice	*Ice::clone(void)const{
	Ice *ice = new Ice;
	return (ice);
}
std::string	const &Ice::getType(void)const{
	return (type);
}
void		Ice::use(ICharacter& Name){
	std::cout<<"shoots an ice bolt at "<<Name.getName()<<std::endl;
}