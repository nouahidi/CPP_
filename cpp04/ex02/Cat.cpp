#include "Cat.hpp"

Cat::Cat(){
	std::cout<<"Cat: Default Constructor Called"<<std::endl;
	brain = new Brain();
	type = "Cat";
}
Cat::Cat(const Cat & Obj){
	std::cout<<"Cat: Copy Constructor Called"<<std::endl;
	*this = Obj;
	this->brain = new Brain(*(Obj.brain));
}
Cat &Cat::operator=(const Cat & Obj){
	if (this != &Obj){
		this->type = Obj.type;
	}
	return (*this);
}
Cat::~Cat(){
	std::cout<<"Cat: Destructor Called"<<std::endl;
	delete brain;
}
std::string Cat::getType(void)const{
	return (type);
}
void	Cat::makeSound(void)const{
	std::cout<<"...Meow...Meow..."<<std::endl;
}