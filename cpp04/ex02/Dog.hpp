#ifndef Dog_HPP
#define Dog_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal{
	private:
		std::string	type;
		Brain		*brain;
	public:
		Dog();
		Dog(const Dog & Obj);
		Dog	&operator=(const Dog & Obj);
		~Dog();
		std::string	getType(void)const;
		void	makeSound()const;
};

#endif