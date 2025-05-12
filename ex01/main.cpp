
#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"
#include "colors.h"

int main()
{
	Animal* animals[10];
	Dog a;
	Dog b;

	for (int i = 0; i < 5; i++)
		animals[i] = new Cat;
	for (int i = 5; i < 10; i++)
		animals[i] = new Dog;
	for (int i = 0; i < 10; i++)
	{
		animals[i]->makeSound();
		std::cout << animals[i]->getType() << " think: " << animals[i]->getBrain().getIdea(0) <<std::endl;
	}

	std::cout << "a: " << a.getType() << " think: " << a.getBrain().getIdea(0) << std::endl;
	b.getBrain().setIdea(0, "SLEEPING");
	std::cout << "b: " << b.getType() << " think: " << b.getBrain().getIdea(0) << std::endl;
	a = b;
	std::cout << "a: " << a.getType() << " think: " << a.getBrain().getIdea(0) << std::endl;
	b.getBrain().setIdea(0, "PLAYING");
	std::cout << "b: " << b.getType() << " think: " << b.getBrain().getIdea(0) << std::endl;
	std::cout << "a: " << a.getType() << " think: " << a.getBrain().getIdea(0) << std::endl;

	for (int i = 0; i < 10; i++)
		delete animals[i];
}