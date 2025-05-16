
#include "colors.h"
#include "AMateria.hpp"

AMateria::AMateria(): _type("void")
{
	std::cout << GREEN << "Default AMateria constructor called" << RESET << std::endl;
}

AMateria::AMateria(std::string const &type): _type(type)
{
	std::cout << LIGHT_GREEN << "AMateria constructor called with type: " << type << RESET << std::endl;
}

AMateria::AMateria(const AMateria &cpy): _type(cpy._type)
{
	std::cout << BLUE << "Copy constructor AMateria called" << RESET << std::endl;
}

AMateria::~AMateria()
{
	std::cout << RED << "Destructor AMateria called" << RESET << std::endl;
}

AMateria &AMateria::operator=(const AMateria &rhs)
{
	if (this->_type != rhs._type)
		this->_type = rhs._type;
	std::cout << LIGHT_BLUE << "Assignment operator for AMateria called" << std::endl;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter &target)
{
	(void)target;
	std::cout << "Do nothing on" << std::endl;
}