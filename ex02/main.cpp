
#include "Dog.hpp"
#include "Cat.hpp"
#include "AAnimal.hpp"
#include "WrongCat.hpp"
#include "colors.h"

int main()
{
	AAnimal* animals[10];
	Dog a;
	Dog b;
	Dog ca(a);

	for (int i = 0; i < 5; i++)
		animals[i] = new Cat;
	for (int i = 5; i < 10; i++)
		animals[i] = new Dog;

	std::cout << "*****DISPLAY ANIMALS*****" <<std::endl;
	for (int i = 0; i < 10; i++)
	{
		animals[i]->makeSound();
		std::cout << animals[i]->getType() << " think: " << animals[i]->getBrain().getIdea(0) <<std::endl;
	}
	std::cout << "*****TEST DEEP COPY AND OTHERS*****" << std::endl;
	std::cout << "a: " << a.getType() << " think: " << a.getBrain().getIdea(0) << std::endl;
	std::cout << "changing idea of b..." << std::endl;
	b.getBrain().setIdea(0, "SLEEPING");
	std::cout << "b: " << b.getType() << " think: " << b.getBrain().getIdea(0) << std::endl;
	std::cout << "ca: " << ca.getType() << " think: " << ca.getBrain().getIdea(0) << std::endl;
	std::cout << "assignment of b to a..." << std::endl;
	a = b;
	std::cout << "a: " << a.getType() << " think: " << a.getBrain().getIdea(0) << std::endl;
	std::cout << "ca: " << ca.getType() << " think: " << ca.getBrain().getIdea(0) << std::endl;
	std::cout << "changing idea of b..." << std::endl;
	b.getBrain().setIdea(0, "PLAYING");
	std::cout << "b: " << b.getType() << " think: " << b.getBrain().getIdea(0) << std::endl;
	std::cout << "a: " << a.getType() << " think: " << a.getBrain().getIdea(0) << std::endl;
	std::cout << "ca: " << ca.getType() << " think: " << ca.getBrain().getIdea(0) << std::endl;

	for (int i = 0; i < 10; i++)
		delete animals[i];
}