
#include "colors.h"
#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
	std::cout << GREEN << "Default Ice constructor called" << RESET << std::endl;
}

Ice::Ice(const Ice &cpy): AMateria(cpy._type)
{
	std::cout << BLUE << "Copy Ice constructor called" << RESET << std::endl;
}

Ice::~Ice()
{
	std::cout << RED << "Ice Destructor called" << RESET << std::endl;
}

Ice &Ice::operator=(const Ice &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	std::cout << MAGENTA << "Ice assignement operator called" << RESET << std::endl;
	return (*this);
}

AMateria *Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

