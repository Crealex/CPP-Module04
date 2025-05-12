
#include "colors.h"
#include "Brain.hpp"

Brain::Brain(): _ideas()
{
	std::cout << GREEN << "Default Brain constructor called" << RESET << std::endl;
}

Brain::Brain(const Brain &cpy)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = cpy._ideas[i];
	std::cout << BLUE << "Copy constructor Brain called" << RESET << std::endl;
}

Brain::~Brain()
{
	std::cout << RED << "Destructor Brain called" << RESET << std::endl;
}

Brain &Brain::operator=(const Brain &rhs)
{
	if (this->_ideas != rhs._ideas)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	std::cout << LIGHT_BLUE << "Assignment operator Brain called" << RESET << std::endl;
	return (*this);
}

void Brain::setIdea(int n, std::string idea)
{
	this->_ideas[n] = idea;
}

std::string Brain::getIdea(int n) const
{
	return (this->_ideas[n]);
}