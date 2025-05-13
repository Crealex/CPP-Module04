
#include "colors.h"
#include "Dog.hpp"

Dog::Dog(): AAnimal("Dog"), _brain(new Brain)
{
	std::cout << GREEN << "Default Dog constructor called" << RESET << std::endl;
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea(i, "EAT BONES");
}

Dog::Dog(const Dog &cpy): AAnimal(cpy._type), _brain(new Brain)
{
	this->_type = cpy._type;
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea(i, cpy._brain->getIdea(i));
	std::cout << BLUE << "Copy Dog constructor called" << RESET << std::endl;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << RED << "Destructor Dog called" << RESET << std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
	if (this->_type != rhs._type || this->_brain != rhs._brain)
	{
		this->_type = rhs._type;
		for (int i = 0; i < 100; i++)
		{
			this->_brain->setIdea(i, rhs._brain->getIdea(i));
		}
	}
	std::cout << LIGHT_BLUE << "Assignment operator for Dog called" << RESET << std::endl;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "The Dog make a sound : Wouaf Wouaf !" << std::endl;
}

Brain &Dog::getBrain() const
{
	return (*this->_brain);
}
