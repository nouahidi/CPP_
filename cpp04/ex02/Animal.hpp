#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal & Obj);
		virtual ~Animal();
		Animal &operator=(const Animal & Obj);
		virtual std::string	getType()const;
		virtual void	makeSound()const;
};

#endif