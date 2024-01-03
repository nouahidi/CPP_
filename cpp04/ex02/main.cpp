#include "Animal.hpp"
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp" 

int main() {
	AAnimal* animals[3];

	animals[0] = new Dog();
	animals[1] = new Cat();
	animals[2] = new Dog();

	for (int i = 0; i < 3; i++) {
		std::cout << "Type: " << animals[i]->getType() << std::endl;
		animals[i]->makeSound();
		delete animals[i];
	}
	return 0;
}