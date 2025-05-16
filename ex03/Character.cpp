
#include "colors.h"
#include "Character.hpp"

// ***** CANONICAL METHODS *****

Character::Character(): ICharacter(), _name("Eudois"), _inventory()
{
	std::cout << GREEN << "Default Character constructor called" << RESET << std::endl;
}

Character::Character(std::string name): ICharacter(), _name(name), _inventory()
{
	std::cout << LIGHT_GREEN << "Character constructor with the name " << name << " called" << RESET << std::endl;
}

Character::Character(const Character &cpy): ICharacter(), _name(cpy._name), _inventory()
{
	for (int i = 0; i < 4; i++)
	{
		if (cpy._inventory[i])
			this->_inventory[i] = cpy._inventory[i]->clone();
	}
	std::cout << BLUE << "Copy Character constructor called" << RESET << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout << RED << "Character destructor called" << RESET << std::endl;
}

Character &Character::operator=(const Character &rhs) // a modif
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];
			if (rhs._inventory[i])
				this->_inventory[i] = rhs._inventory[i]->clone();
		}
	}
	std::cout << LIGHT_BLUE << "Character assignment operator called" << RESET << std::endl;
	return (*this);
}

// ***** INTERFACES METHODS *****

std::string const &Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{
	if (!m)
	{
		std::cout << "invalid materia ! " << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			std::cout << MAGENTA << m->getType() << " equiped in place " << i << " of inventory" << RESET << std::endl;
			return ;
		}
	}
	std::cout << MAGENTA << "No place left in inventory !" << RESET <<std::endl;
	delete m;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || !this->_inventory[idx])
	{
		std::cout << "This spot is empty !" << std::endl;
		return ;
	}
	this->_onGround.addElem(this->_inventory[idx]);
	std::cout << this->_inventory[idx]->getType() << " unequiped !" << std::endl;
	this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && this->_inventory[idx])
		this->_inventory[idx]->use(target);
	else
		std::cout << "No Materia in this spot !" << std::endl;
}