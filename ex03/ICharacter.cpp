
#include "colors.h"
#include "ICharacter.hpp"

ICharacter::ICharacter():
{
	std::cout << GREEN << "Default ICharacter constructor called" << RESET << std::endl;
}

ICharacter::ICharacter(const ICharacter &cpy)
{
	std::cout << BLUE << "Copy constructor called" << RESET << std::endl;
}

ICharacter::~ICharacter()
{
	std::cout << RED << "Destructor called" << RESET << std::endl;
}

ICharacter &ICharacter::operator=(const ICharacter &rhs)
{

}

