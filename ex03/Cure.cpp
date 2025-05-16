
#include "colors.h"
#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
	std::cout << GREEN << "Default Cure constructor called" << RESET << std::endl;
}

Cure::Cure(const Cure &cpy): AMateria(cpy._type)
{
	std::cout << BLUE << "Copy Cure constructor called" << RESET << std::endl;
}

Cure::~Cure()
{
	std::cout << RED << "Cure destructor called" << RESET << std::endl;
}

Cure &Cure::operator=(const Cure &rhs)
{
	if (this != &rhs)
		AMateria::operator=(rhs); // autre maniere de faire
	std::cout << LIGHT_BLUE << "Cure assignment operator called" << RESET << std::endl;
	return (*this);
}

AMateria *Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}