#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	private:
		AMateria    *inventory[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource & Obj);
		~MateriaSource();
		MateriaSource	&operator=(const MateriaSource & Obj);
		void			learnMateria(AMateria* type);
		AMateria		*createMateria(std::string const & type);
};

#endif