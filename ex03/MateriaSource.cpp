
#include "colors.h"
#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): IMateriaSource(), _materias()
{
	std::cout << GREEN << "Default MateriaSource constructor called" << RESET << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &cpy): IMateriaSource(), _materias()
{
	for (int i = 0; i < 4; i++)
	{
		this->_materias[i] = cpy._materias[i]->clone();
	}
	std::cout << BLUE << "Copy MateriaSource constructor called" << RESET << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i])
		{
			std::cout << "delete materias" << std::endl;
			delete _materias[i];
			_materias[i] = NULL;
		}
	}
	std::cout << RED << "MateriaSource destructor called" << RESET << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
		this->_materias[i] = rhs._materias[i]->clone();
	}
	std::cout << LIGHT_BLUE << "MateriaSource assignment operator called" << RESET << std::endl;
	return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
	if (!materia)
	{
		std::cout << "invalid materia ! " << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (!this->_materias[i])
		{
			this->_materias[i] = materia->clone();
			std::cout << materia->getType() << " stock in spot of MateriaSource number " << i << std::endl;
			return ;
		}
	}
	std::cout << "No spot left in MateriaSource !" << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i]->getType() == type)
		{
			std::cout << this->_materias[i]->getType() << " created !" << std::endl;
			return (this->_materias[i]->clone());
		}
	}
	std::cout << "Materia with the type " << type << "doesn't exist !" << std::endl;
	return (NULL);
}