#include "Cat.hpp"

Cat::Cat(){
	std::cout<<"Cat: Default Constructor Called"<<std::endl;
	type = "Cat";
	brain = new Brain();
}
Cat::Cat(const Cat & Obj){
	std::cout<<"Cat: Copy Constructor Called"<<std::endl;
	type = Obj.getType();
	brain = new Brain(*(Obj.getBrain()));
}
Cat &Cat::operator=(const Cat & Obj){
	if (this != &Obj){
		this->type = Obj.type;
		if (brain)
			delete brain;
		brain = new Brain(*(Obj.getBrain()));
	}
	return (*this);
}
Cat::~Cat(){
	delete brain;
	std::cout<<"Cat: Destructor Called"<<std::endl;
}
std::string Cat::getType(void)const{
	return (type);
}
void	Cat::makeSound(void)const{
	std::cout<<"\033[34m"<<"...Meow...Meow..."<<"\033[0m"<<std::endl;
}
Brain	*Cat::getBrain(void)const{
	return (brain);
}