#include "Dog.hpp"

Dog::Dog(){
	std::cout<<"Dog: Default Constructor Called"<<std::endl;
	type = "Dog";
	brain = new Brain();
}
Dog::Dog(const Dog & Obj){
	std::cout<<"Dog: Copy Constructor Called"<<std::endl;
	type = Obj.getType();
	brain = new Brain(*(Obj.getBrain()));
}
Dog &Dog::operator=(const Dog & Obj){
	if (this != &Obj){
		this->type = Obj.type;
		if (brain)
			delete brain;
		brain = new Brain(*(Obj.getBrain()));
	}
	return (*this);
}
Dog::~Dog(){
	delete brain;
	std::cout<<"Dog: Destructor Called"<<std::endl;
}
std::string Dog::getType(void)const{
	return (this->type);
}
void	Dog::makeSound()const{
	std::cout<<"\033[34m"<<"...Woof...Woof..."<<"\033[0m"<<std::endl;
}
Brain	*Dog::getBrain(void)const{
	return (brain);
}