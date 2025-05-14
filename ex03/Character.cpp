
#include "colors.h"
#include "Character.hpp"

// ***** CANONICAL METHODS *****

Character::Character(): ICharacter(), _name("Eudois")
{
	std::cout << GREEN << "Default Character constructor called" << RESET << std::endl;
}

Character::Character(std::string name): ICharacter(), _name(name)
{
	std::cout << LIGHT_GREEN << "Character constructor with the name " << name << " called" << RESET << std::endl;
}

Character::Character(const Character &cpy): ICharacter(), _name(cpy._name)
{
	for (int i = 0; i < 4; i++)
			this->_inventory[i] = cpy._inventory[i];
	std::cout << BLUE << "Copy Character constructor called" << RESET << std::endl;
}

Character::~Character()
{
	std::cout << RED << "Character destructor called" << RESET << std::endl;
}

Character &Character::operator=(const Character &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		for (int i = 0; i < 4; i++)
			this->_inventory[i] = rhs._inventory[i];
	}
	std::cout << LIGHT_BLUE << "Character assignment operator called" << RESET << std::endl;
	return (*this);
}

// ***** INTERFACES METHODS *****