
#include "colors.h"
#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << GREEN << "Default Cat constructor called" << RESET << std::endl;
}

Cat::Cat(const Cat &cpy): Animal(cpy._type)
{
	this->_type = cpy._type;
	std::cout << BLUE << "Copy Cat constructor called" << RESET << std::endl;
}

Cat::~Cat()
{
	std::cout << RED << "Destructor Cat called" << RESET << std::endl;
}

Cat &Cat::operator=(const Cat &rhs)
{
	if (this->_type != rhs._type)
		this->_type = rhs._type;
	std::cout << LIGHT_BLUE << "Assignment operator for Cat called" << std::endl;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "The Cat make a sound : Miaou Miaoou !" << std::endl;
}