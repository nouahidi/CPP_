#include "Cat.hpp"

Cat::Cat(){
	std::cout<<"Cat: Default Constructor Called"<<std::endl;
	type = "Cat";
}
Cat::Cat(const Cat & Obj){
	std::cout<<"Cat: Copy Constructor Called"<<std::endl;
	*this = Obj;
}
Cat &Cat::operator=(const Cat & Obj){
	if (this != &Obj){
		this->type = Obj.type;
	}
	return (*this);
}
Cat::~Cat(){
	std::cout<<"Cat: Destructor Called"<<std::endl;
}
std::string Cat::getType(void)const{
	return (type);
}
void	Cat::makeSound(void)const{
	std::cout<<"\033[34m"<<"...Meow...Meow..."<<"\033[0m"<<std::endl;
}