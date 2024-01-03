#ifndef	CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria{
	private:
		std::string type;
	public:
		Cure();
		~Cure();
		Cure(const Cure & Obj);
		Cure		&operator=(const Cure & Obj);
		Cure		*clone(void)const;
		std::string	const & getType(void)const;
		void		use(ICharacter& Name);
};

#endif