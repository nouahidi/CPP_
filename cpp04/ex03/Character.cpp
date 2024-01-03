#include "Character.hpp"

Character::Character(std::string Name){
	std::cout<<"Chareacter: Default Constructor Called"<<std::endl;
	this->Name = Name;
	for(int i = 0; i < 4; i++)
		inventory[i] = 0;
}
Character::Character(const Character & Obj){
	std::cout<<"Character: Copy Constructor Called"<<std::endl;
	Name = Obj.Name;
	for(int i = 0; i < 4; i++)
	{
		if (Obj.inventory[i])
			inventory[i] = Obj.inventory[i]->clone();
	}
}
Character::~Character(){
	std::cout<<"Character: Default Destructor Called"<<std::endl;
	for(int i = 0; i < 4; i++){
		if (inventory[i])
			delete inventory[i];
	}
}
Character	&Character::operator=(const Character & Obj){
	for(int i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
		if (Obj.inventory[i])
			inventory[i] = Obj.inventory[i]->clone();
	}
	return (*this);
}
std::string	const &Character::getName(void) const {
	return (Name);
}
void	Character::equip(AMateria* m){
	if (!m){
		std::cout<<"NULL"<<std::endl;
		return ;
	}
	int i = 0;
	while (inventory[i] && i < 4)
		i++;
	if (i >= 4)
		std::cout<<"There is no empty place"<<std::endl;
	else
	{
		inventory[i] = m->clone();
		std::cout<<"Conversion completed successfully"<<std::endl;
	}
}
void	Character::unequip(int idx){
	if (idx < 0 || idx >= 4)
		std::cout<<"error: idx is not limited to 0->3"<<std::endl;
	else if (!inventory[idx])
		std::cout<<"has nothing equipped"<<idx<<std::endl;
	else
		inventory[idx] = 0;
}
void	Character::use(int idx, ICharacter& target){
	if(idx < 0 || idx >= 4 || !inventory[idx])
		std::cout<<"error: used"<<std::endl;
	else
		inventory[idx]->use(target);
}
AMateria	*Character::getMateriaFromInventory(int idx)
{
	return (this->inventory)[idx];
}