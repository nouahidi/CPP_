#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	type = "WrongAnimal";
	std::cout<<"WrongAnimal: Default Constructure Called"<<std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal & Obj){
	*this = Obj;
	std::cout<<"WrongAnimal: Copy Constracture Called"<<std::endl;
}
WrongAnimal::~WrongAnimal(){
	std::cout<<"WrangeAnimal: Destracture Called"<<std::endl;
}
WrongAnimal	&WrongAnimal::operator=(const WrongAnimal & Obj){
	if (this != &Obj)
		this->type = Obj.type;
		return (*this);
}
std::string	WrongAnimal::getType(void)const{
	return (type);
}
void	WrongAnimal::makeSound()const{
	std::cout<<"\033[32m"<<"|--WrongSound--|"<<"\033[0m"<<std::endl;
}