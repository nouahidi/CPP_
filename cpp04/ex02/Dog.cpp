#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(){
	std::cout<<"Dog: Default Constructor Called"<<std::endl;
	brain = new Brain();
	type = "Dog";
}
Dog::Dog(const Dog & Obj){
	std::cout<<"Dog: Copy Constructor Called"<<std::endl;
	*this = Obj;
	this->brain = new Brain(*(Obj.brain));
}
Dog &Dog::operator=(const Dog & Obj){
	if (this != &Obj){
		this->type = Obj.type;
	}
	return (*this);
}
Dog::~Dog(){
	std::cout<<"Dog: Destructor Called"<<std::endl;
	delete brain;
}
std::string Dog::getType(void)const{
	return (this->type);
}
void	Dog::makeSound()const{
	std::cout<<"...Woof...Woof..."<<std::endl;
}