#include "ScavTrap.hpp"

int	main()
{
	ScavTrap a("PREDATOR");
	a.attack("AAA");
	// ClapTrap b("noureddine");
	// b.attack("BBB");
	for(int i = 0; i < 4; i++){
        a.attack("elfany");
        std::cout<<"energy = " <<a.getEnergyPoint()<<std::endl;
        std::cout<<"Hitpoint = " <<a.getHitPoint()<<std::endl;
        std::cout<<"attack damage = " <<a.getAttackDamage()<<std::endl;
    }
    a.guardGate();
}