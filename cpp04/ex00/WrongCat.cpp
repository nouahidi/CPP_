#include "WrongCat.hpp"

WrongCat::WrongCat(){
	std::cout<<"WrongCat: Constructor Called"<<std::endl;
	type = "WrongCat";
}
WrongCat::WrongCat(const WrongCat & Obj){
	std::cout<<"WrongCat: Copy Constructor Called"<<std::endl;
	*this = Obj;
}
WrongCat::~WrongCat(){
	std::cout<<"WrongCat: Destructor Called"<<std::endl;
}
WrongCat &WrongCat::operator=(const WrongCat & Obj){
	if (this != &Obj)
		this->type = Obj.type;
	return (*this);
}
std::string	WrongCat::getType(void)const{
	return (type);
}
void	WrongCat::makeSound(void)const{
	std::cout<<"\033[34m"<<"WrongCat:...Meow...Meow..."<<"\033[0m"<<std::endl;
}