
#include "colors.h"
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("Pneumodesmus newmani")
{
	std::cout << GREEN << "Default WrongAnimal constructor called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): _type(type)
{
	std::cout << LIGHT_GREEN << "WrongAnimal constructor called with the type " << type << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy): _type(cpy._type)
{
	std::cout << BLUE << "Copy constructor WrongAnimal called" << RESET << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << RED << "Destructor Wrong Animal called" << RESET << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
	if (this->_type != rhs._type)
		this->_type = rhs._type;
	std::cout << LIGHT_BLUE << "Assignment operator WrongAnimal called" << RESET << std::endl;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "The Pneumodesmus newmani make a sound : Brzzrzzrzzrrzz" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}