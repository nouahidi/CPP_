#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	std::cout<<"MateriaSource: Default constructor Called"<<std::endl;
	for(int i = 0; i < 4; i++)
		inventory[i] = 0;
}
MateriaSource::MateriaSource(const MateriaSource & Obj){
	for(int i = 0; i < 4;i++)
	{
		if (Obj.inventory[i])
			inventory[i] = Obj.inventory[i]->clone();
	}
}
MateriaSource::~MateriaSource(){
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
	}
	std::cout<<"MateriaSource: Destructor Called"<<std::endl;
}
MateriaSource   &MateriaSource::operator=(const MateriaSource & Obj){
	for(int i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
		if (Obj.inventory[i])
			inventory[i] = Obj.inventory[i]->clone();
	}
	return (*this);
}
void    MateriaSource::learnMateria(AMateria *type){
	int i = 0;
	while (inventory[i] && i < 4)
		i++;
	if (i >= 4)
		std::cout<<"error: MateriaSource Learn Materia"<<std::endl;
	else
	{
		inventory[i] = type->clone();
		std::cout<<"ADD: "<<type->getType()<<" Completed"<<std::endl;
	}
}
AMateria		*MateriaSource::createMateria(std::string const & type){
	int i = 0;

	while (inventory[i] && inventory[i]->getType() != type && i < 4)
		i++;
	if (i >= 4 || !inventory[i])
		std::cout<<"error: MateriaSource Creat Materia"<<std::endl;
	else
		return (inventory[i]->clone());
	return (NULL);
}