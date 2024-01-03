#include "ClapTrap.hpp"
ClapTrap::ClapTrap() : 	Name("Default"), HitPoint(10) , EnergyPoint(10) , AttackDamage(0) {
	std::cout<<"Default Constructor Called"<<std::endl;
};
ClapTrap::ClapTrap(std::string Name) : HitPoint(10) , EnergyPoint(10) , AttackDamage(0) {
	std::cout<<"Overloding Constructor Called"<<std::endl;
	this->Name = Name;
};
ClapTrap::ClapTrap(const ClapTrap & Clap){
	std::cout<<"Copy Constructor Called"<<std::endl;
	*this = Clap;
};
ClapTrap::~ClapTrap(){
	std::cout<<"Destractor Called"<<std::endl;
};
ClapTrap &ClapTrap::operator=(const ClapTrap & Clap){
	if (this != &Clap){
		this->Name = Clap.Name;
		this->HitPoint = Clap.HitPoint;
		this->EnergyPoint = Clap.EnergyPoint;
		this->EnergyPoint = Clap.EnergyPoint;
		this->AttackDamage = Clap.AttackDamage;
	}
	return *this;
};
void ClapTrap::attack(const std::string& target){
	if (EnergyPoint > 0 && HitPoint > 0){
		EnergyPoint--;
		std::cout<< "ClapTrap " << Name << " attacks " << target << " causing " << AttackDamage <<  " points of damage!" <<std::endl;
	}
	else
		std::cout << "No Energy Point" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount){

	if(!EnergyPoint || !HitPoint){
		if (!EnergyPoint)
			std::cout << "No Energy Point" << std::endl;
		else
			std::cout << "No HitPoint" << std::endl;
		return ;
	}
	if (EnergyPoint > 0 && HitPoint > 0) {
		std::cout << "I am Dammaged @" << std::endl;
	}
	if (amount <= 10 && HitPoint - amount < 10)
		HitPoint -= amount;
	else
		HitPoint = 0;
}
void ClapTrap::beRepaired(unsigned int amount) {
	if (EnergyPoint > 0 && HitPoint > 0)
		std::cout << "I am Repaired @" << std::endl;
	else
	{
		if (!EnergyPoint)
			std::cout << "No Energy Point" << std::endl;
		else if (!HitPoint)
			std::cout << "No Hit Point" << std::endl;
		return ;
	}
	if (amount + HitPoint <= 10)
		HitPoint += amount;
	else
		HitPoint = 10;
}

int ClapTrap::getEnergyPoint() {
	return EnergyPoint;
}
int ClapTrap::getHitPoint() {
	return HitPoint;
}
int ClapTrap::getAttackDamage() {
	return AttackDamage;
}