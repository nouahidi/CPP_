#include "Dog.hpp"

Dog::Dog(){
	std::cout<<"Dog: Default Constructor Called"<<std::endl;
	type = "Dog";
}
Dog::Dog(const Dog & Obj){
	*this = Obj;
}
Dog &Dog::operator=(const Dog & Obj){
	if (this != &Obj){
		this->type = Obj.type;
	}
	return (*this);
}
Dog::~Dog(){
	std::cout<<"Dog: Destructor Called"<<std::endl;
}
std::string Dog::getType(void)const{
	return (this->type);
}
void	Dog::makeSound()const{
	std::cout<<"\033[34m"<<"...Woof...Woof..."<<"\033[0m"<<std::endl;
}