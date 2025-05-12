
#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"
#include "colors.h"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* w = new WrongCat();

	std::cout << BOLD << "Type:" << RESET << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << w->getType() << " " << std::endl;
	std::cout << BOLD << "sound of cat:" << RESET << std::endl;
	i->makeSound(); //will output the cat sound!
	std::cout << BOLD << "sound of dog:" << RESET << std::endl;
	j->makeSound();
	std::cout << BOLD << "sound of DefaultAnimal :" << RESET << std::endl;
	meta->makeSound();
	std::cout << BOLD << "sound of wrongCat :" << RESET << std::endl;
	w->makeSound();
	delete meta;
	delete j;
	delete i;
	delete w;
	return 0;
}