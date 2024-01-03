#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
	private:
		std::string type;
	public:
		WrongCat();
		WrongCat(const WrongCat & Obj);
		~WrongCat();
		WrongCat &operator=(const WrongCat & Obj);
		std::string	getType(void)const;
		void	makeSound(void)const;
};

#endif