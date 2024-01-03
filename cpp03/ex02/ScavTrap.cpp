#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	Name = "Default";
	HitPoint = 100;
	EnergyPoint = 50;
	AttackDamage = 20;
	std::cout<<"ScavTrap: Default constractor called"<<std::endl;
};
ScavTrap::ScavTrap(std::string Name){
	this->Name = Name;
	HitPoint = 100;
	EnergyPoint = 50;
	AttackDamage = 20;
	std::cout<<"ScavTrap: Constructor2 Called"<<std::endl;
};
ScavTrap::ScavTrap(const ScavTrap &Clap){
	std::cout<<"ScavTrap: Copy constractor called"<<std::endl;
	*this = Clap;
};
ScavTrap &ScavTrap::operator=(const ScavTrap &Ctrap){
	if (this != &Ctrap){
		this->Name = Ctrap.Name;
		this->HitPoint = Ctrap.HitPoint;
		this->EnergyPoint = Ctrap.EnergyPoint;
		this->AttackDamage = Ctrap.AttackDamage;
	}
	return(*this);
};
ScavTrap::~ScavTrap(){
	std::cout<<"Destractor ScavTrap is called"<<std::endl;
};
void ScavTrap::guardGate(){
	std::cout << "ScavTrap: " << Name << "is now in Gate" << std::endl;
};

void ScavTrap::attack(const std::string& target){
	if (EnergyPoint > 0 && HitPoint > 0){
		EnergyPoint--;
		std::cout<< "ScavTrap: " << Name << " attacks " << target << " causing " << AttackDamage <<  " points of damage!" <<std::endl;
	}
	else
		std::cout << "ScavTrap: No energy point" << std::endl;
}

int	ScavTrap::getEnergyPoint(){
	return (EnergyPoint);
};
int	ScavTrap::getHitPoint(){
	return (HitPoint);
};
int	ScavTrap::getAttackDamage(){
	return (AttackDamage);
};