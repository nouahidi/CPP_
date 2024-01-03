#include "AAnimal.hpp"

AAnimal::AAnimal(){
    type = "AAnimal";
    std::cout<<"AAnimal: Deafault Constructor Called"<<std::endl;
}

AAnimal::AAnimal(const AAnimal &Obj){
    *this = Obj;
    std::cout<<"AAnimal: Copy Constructor Called"<<std::endl;
}

AAnimal::~AAnimal(){
    std::cout<<"AAnimal: Destructor Called"<<std::endl;
}
AAnimal &AAnimal::operator=(const AAnimal & Obj){
	if (this != &Obj){
		this->type = Obj.type;
	}
	return *this;
}
void	AAnimal::makeSound()const{
	std::cout<<"AAnimal Sound"<<std::endl;
}
std::string	AAnimal::getType(void)const{
	return(type);
}