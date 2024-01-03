#ifndef Dog_HPP
#define Dog_HPP

#include "Animal.hpp"

class Dog : public Animal{
	private:
		std::string	type;
	public:
		Dog();
		Dog(const Dog & Obj);
		Dog	&operator=(const Dog & Obj);
		~Dog();
		std::string	getType(void)const;
		void	makeSound()const;
};

#endif