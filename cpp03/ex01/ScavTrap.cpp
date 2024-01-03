#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap(){
	Name = "Default";
	HitPoint = 100;
	EnergyPoint = 50;
	AttackDamage = 20;
	std::cout<<"ScavTrap: Default constractor called"<<std::endl;
};
ScavTrap::ScavTrap(std::string Name):ClapTrap(Name){
	this->Name = Name;
	HitPoint = 100;
	EnergyPoint = 50;
	AttackDamage = 20;
	std::cout<<"ScavTrap: Constructor2 Called"<<std::endl;
};
ScavTrap::ScavTrap(ScavTrap &Clap): ClapTrap(Clap){
	std::cout<<"ScavTrap: Copy constractor called"<<std::endl;
	*this = Clap;
};
ScavTrap &ScavTrap::operator=(ScavTrap &Ctrap){
	if (this != &Ctrap){
		this->Name = Ctrap.Name;
		this->HitPoint = Ctrap.HitPoint;
		this->EnergyPoint = Ctrap.EnergyPoint;
		this->AttackDamage = Ctrap.AttackDamage;
	}
	return(*this);
};
ScavTrap::~ScavTrap(){
	std::cout<<"Destractor ScavTrap called"<<std::endl;
};
void ScavTrap::guardGate(){
	std::cout <<"\033[31m"<< "ScavTrap: " << Name << " is now in Gate" <<"\033[0m"<< std::endl;
};

void ScavTrap::attack(const std::string& target){
	if (EnergyPoint > 0 && HitPoint > 0){
		EnergyPoint--;
		std::cout<<"\033[32m"<< "ScavTrap: " << Name << " attacks " << target << " causing " << AttackDamage <<  " points of damage!" <<"\033[0m"<<std::endl;
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