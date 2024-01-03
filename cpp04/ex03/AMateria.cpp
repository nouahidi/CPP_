#include "AMateria.hpp"

AMateria::AMateria(){
	type = "";
	std::cout<<"AMateria: Default Constructor Called"<<std::endl;
}

AMateria::~AMateria(){
	std::cout<<"AMateria: Destructor Called"<<std::endl;
}
AMateria::AMateria(std::string const & type){
	std::cout<<"AMateria: Copy Constructor Called"<<std::endl;
	this->type = type;
}
AMateria::AMateria(const AMateria & Obj){
	std::cout<<"AMateria: Default Destrutor Called"<<std::endl;
		*this = Obj;
}

AMateria &AMateria::operator=(const AMateria & Obj){
	if (this != &Obj)
		this->type = Obj.type;
	return (*this);
}

std::string const & AMateria::getType() const{
	return (type);
}
void	AMateria::use(ICharacter& target){
	std::cout<<"AMateria: Abstractly used "<<target.getName()<<std::endl;
}