#ifndef _ClapTrap_HPP_
#define _ClapTrap_HPP_

#include <iostream>

class ClapTrap{
	private:
		std::string 			Name;
		unsigned int			HitPoint;
		unsigned int			EnergyPoint;
		unsigned int			AttackDamage;
	public:
		ClapTrap();
		ClapTrap(std::string Name);
		ClapTrap(const ClapTrap & Clap);
		ClapTrap &operator=(const ClapTrap & Clap);
		~ClapTrap();
		int getEnergyPoint();
		int getHitPoint();
		int getAttackDamage();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif