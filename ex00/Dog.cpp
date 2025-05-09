
#include "colors.h"
#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << GREEN << "Default Dog constructor called" << RESET << std::endl;
}

Dog::Dog(const Dog &cpy): Animal(cpy._type)
{
	this->_type = cpy._type;
	std::cout << BLUE << "Copy Dog constructor called" << RESET << std::endl;
}

Dog::~Dog()
{
	std::cout << RED << "Destructor Dog called" << RESET << std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
	if (this->_type != rhs._type)
		this->_type = rhs._type;
	std::cout << LIGHT_BLUE << "Assignment operator for Dog called" << std::endl;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "The Dog make a sound : Wouaf Wouaf !" << std::endl;
}
