#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter{
	private:
		AMateria	*inventory[4];
		std::string Name;
	public:
		Character(std::string Name);
		Character(const Character & Obj);
		~Character();
		Character	&operator=(const Character & Obj);
		std::string	const & getName(void)const ;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		AMateria	*getMateriaFromInventory(int idx);
};

#endif