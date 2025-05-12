
#include "colors.h"
#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("Cat")
{
	std::cout << GREEN << "Default WrongCat constructor called" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy): WrongAnimal(cpy._type)
{
	this->_type = cpy._type;
	std::cout << BLUE << "Copy constructor WrongCat called" << RESET << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << RED << "Destructor WrongCat called" << RESET << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
	if (this->_type != rhs._type)
		this->_type = rhs._type;
	std::cout << LIGHT_BLUE << "Assignment operator for WrongCat called" << std::endl;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "The Cat make a sound : Miaou Miaoou !" << std::endl;
}


