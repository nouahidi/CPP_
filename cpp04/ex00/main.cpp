#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* Wrongmeta = new WrongAnimal();
	const WrongAnimal* Wrongi = new WrongCat();
	std::cout << "type j == "<< j->getType() << std::endl;
	std::cout << "type i == "<< i->getType() << std::endl;
	std::cout << "makeSound for Cat -->";
	i->makeSound();
	std::cout << "makeSound for Dog --> ";
	j->makeSound();
	std::cout << "makeSound for Animal --> ";
	meta->makeSound();
	std::cout << "makeSound for WrongAnimal -->";
	Wrongmeta->makeSound();
	std::cout << "makeSound for WrongCat -->";
	Wrongi->makeSound();
	delete meta;
	delete j;
	delete i;
	delete Wrongmeta;
	delete Wrongi;
	return (0);
}