#include "Animal.hpp"

Animal::Animal(){
	std::cout<<"Animal: Default Constructorc Caled"<<std::endl;
	type = "";
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
};
void	Animal::makeSound()const{
	std::cout<<"\033[33m"<<"|--Animal Sound--|"<<"\033[0m"<<std::endl;
};
std::string	Animal::getType(void)const{
	return(type);
}