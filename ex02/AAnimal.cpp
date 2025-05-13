
#include "colors.h"
#include "AAnimal.hpp"

AAnimal::AAnimal(): _type("Pneumodesmus newmani")
{
	std::cout << GREEN << "Default AAnimal constructor called" << RESET << std::endl;
}

AAnimal::AAnimal(std::string type): _type(type)
{
	std::cout << LIGHT_GREEN << "AAnimal constructor called with the type " << type << RESET << std::endl;
}

AAnimal::AAnimal(const AAnimal &cpy): _type(cpy._type)
{
	std::cout << BLUE << "Copy constructor AAnimal called" << RESET << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << RED << "Destructor AAnimal called" << RESET << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &rhs)
{
	if (this->_type != rhs._type)
		this->_type = rhs._type;
	std::cout << LIGHT_BLUE << "Assignment operator AAnimal called" << RESET << std::endl;
	return (*this);
}

void AAnimal::makeSound() const
{
	std::cout << "The Pneumodesmus newmani make a sound : Brzzrzzrzzrrzz" << std::endl;
}

std::string AAnimal::getType() const
{
	return (this->_type);
}

