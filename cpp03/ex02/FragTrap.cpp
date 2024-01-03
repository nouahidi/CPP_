#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout<<"FragTrap: Default Constractur Called"<<std::endl;
	Name = "Default";
	HitPoint = 100;
	EnergyPoint = 100;
	AttackDamage = 30;
}
FragTrap::FragTrap(std::string Name) {
	std::cout<<"FragTrap: Constractur2 Called"<<std::endl;
	this->Name = Name;
	HitPoint = 100;
	EnergyPoint = 100;
	AttackDamage = 30;
}
FragTrap &FragTrap::operator=(const FragTrap & Frag){
	if (this != &Frag)
	{
		this->Name = Frag.Name;
		this->EnergyPoint = Frag.EnergyPoint;
		this->HitPoint = Frag.HitPoint;
		this->AttackDamage = Frag.AttackDamage;
	}
	return (*this);
}
FragTrap::~FragTrap(){
	std::cout<<"FragTrap: Destractor Called"<<std::endl;
}
void FragTrap::highFivesGuys(void){
	std::cout<<"\033[31m"<<"HIGH FIVE"<<"\033[0m"<<std::endl;
}
void	FragTrap::attack(const std::string &target){
	if (EnergyPoint > 0 && HitPoint > 0){
		EnergyPoint--;
		std::cout<< "FragTrap: " << Name << " attacks " << target << " causing " << AttackDamage <<  " points of damage!" <<std::endl;
	}
	else
		std::cout << "FragTrap: No energy point" << std::endl;
}