#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal & Obj);
		~WrongAnimal();
		WrongAnimal &operator=(const WrongAnimal & Obj);
		std::string	getType(void)const;
		void	makeSound()const;
};

#endif