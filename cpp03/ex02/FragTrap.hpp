#ifndef _FragTrap_HPP_
#define _FragTrap_HPP_

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
	public:
		FragTrap();
		FragTrap(std::string Name);
		FragTrap &operator=(const FragTrap & Frag);
		~FragTrap();
		void	highFivesGuys(void);
		void	attack(const std::string &target);
};

#endif