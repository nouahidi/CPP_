#ifndef _ScavTrap_HPP_
#define _ScavTrap_HPP_

#include  "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
	public:
	ScavTrap();
	ScavTrap(std::string Name);
	ScavTrap(const ScavTrap & CTrap);
	ScavTrap	&operator=(const ScavTrap &CTrap);
	~ScavTrap();
	void	guardGate();
	void	attack(const std::string& target);
	int		getEnergyPoint();
	int		getHitPoint();
	int		getAttackDamage();
};

#endif