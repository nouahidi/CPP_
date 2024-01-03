#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria{
	private:
		std::string type;
	public:
		Ice();
		~Ice();
		Ice(const Ice & Obj);
		Ice		&operator=(const Ice & Obj);
		Ice		*clone(void)const;
		std::string	const & getType(void)const;
		void		use(ICharacter& Name);
};

#endif