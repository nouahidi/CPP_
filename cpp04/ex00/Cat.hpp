#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
	private:
		std::string	type;
	public:
		Cat();
		Cat(const Cat & Obj);
		Cat	&operator=(const Cat & Obj);
		~Cat();
		std::string	getType(void)const;
		void	makeSound(void)const;
};

#endif