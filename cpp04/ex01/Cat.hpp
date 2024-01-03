#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
	private:
		std::string	type;
		Brain		*brain;
	public:
		Cat();
		Cat(const Cat & Obj);
		Cat	&operator=(const Cat & Obj);
		~Cat();
		std::string	getType(void)const;
		void	makeSound(void)const;
		Brain	*getBrain(void)const;
};

#endif