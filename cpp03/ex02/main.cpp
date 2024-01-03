#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main (){
	ClapTrap clap("Clap");
	FragTrap frag("Frag");
	ScavTrap scav("Scav");
	clap.attack("noureddine");
	frag.attack("ouahidi");
	scav.attack("Predator");
	frag.highFivesGuys();
}