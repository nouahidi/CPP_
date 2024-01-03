#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal{
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
};