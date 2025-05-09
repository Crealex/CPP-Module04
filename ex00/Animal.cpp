
#include "colors.h"
#include "Animal.hpp"

Animal::Animal(): _type("Pneumodesmus newmani")
{
	std::cout << GREEN << "Default Animal constructor called" << RESET << std::endl;
}

Animal::Animal(std::string type): _type(type)
{
	std::cout << LIGHT_GREEN << "Animal constructor called with the type " << type << RESET << std::endl;
}

Animal::Animal(const Animal &cpy): _type(cpy._type)
{
	std::cout << BLUE << "Copy constructor Animal called" << RESET << std::endl;
}

Animal::~Animal()
{
	std::cout << RED << "Destructor Animal called" << RESET << std::endl;
}

Animal &Animal::operator=(const Animal &rhs)
{
	if (this->_type != rhs._type)
		this->_type = rhs._type;
	std::cout << LIGHT_BLUE << "Assignment operator Animal called" << RESET << std::endl;
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "The Pneumodesmus newmani make a sound : Brzzrzzrzzrrzz" << std::endl;
}

std::string Animal::getType() const
{
	return (this->_type);
}

