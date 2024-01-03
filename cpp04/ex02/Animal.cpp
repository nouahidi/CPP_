#include "Animal.hpp"

Animal::Animal(){
	std::cout<<"Animal: Default Constructorc Caled"<<std::endl;
	type = "animal";
};
Animal::Animal(const Animal & Obj){
	std::cout<<"Animal: Copy Constructorc Caled"<<std::endl;
	*this = Obj;
}
Animal &Animal::operator=(const Animal & Obj){
	if (this != &Obj){
		this->type = Obj.type;
	}
	return *this;
}
Animal::~Animal(){
	std::cout<<"Animal: Destructorc Caled"<<std::endl;
}
void	Animal::makeSound()const{
	std::cout<<"Animal Sound"<<std::endl;
}
std::string	Animal::getType(void)const{
	return(type);
}
