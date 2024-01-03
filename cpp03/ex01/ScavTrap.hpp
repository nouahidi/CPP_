#ifndef _FragTrap_HPP_
#define _FragTrap_HPP_

#include  "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
	public:
	ScavTrap();
	ScavTrap(std::string Name);
	ScavTrap(ScavTrap & CTrap);
	ScavTrap	&operator=(ScavTrap &CTrap);
	~ScavTrap();
	void	guardGate();
	void	attack(const std::string& target);
	int		getEnergyPoint();
	int		getHitPoint();
	int		getAttackDamage();
};

#endif