#include "colors.h"
#include "Cat.hpp"

Cat::Cat(): Animal("Cat"), _brain(new Brain)
{
	std::cout << GREEN << "Default Cat constructor called" << RESET << std::endl;
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea(i, "CHASE MOUSE");
}

Cat::Cat(const Cat &cpy): Animal(cpy._type), _brain(new Brain)
{
	this->_type = cpy._type;
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea(i, cpy._brain->getIdea(i));
	std::cout << BLUE << "Copy Cat constructor called" << RESET << std::endl;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << RED << "Destructor Cat called" << RESET << std::endl;
}

Cat &Cat::operator=(const Cat &rhs)
{
	if (this->_type != rhs._type)
	{
		this->_type = rhs._type;
		for (int i = 0; i < 100; i++)
			this->_brain->setIdea(i, rhs._brain->getIdea(i));
	}
	std::cout << LIGHT_BLUE << "Assignment operator for Cat called" << std::endl;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "The Cat make a sound : Miaou Miaoou !" << std::endl;
}

Brain &Cat::getBrain() const
{
	return (*this->_brain);
}