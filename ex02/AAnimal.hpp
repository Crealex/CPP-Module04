
#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
#include "Brain.hpp"

class AAnimal
{
	protected:
		std::string _type;
	public:
		AAnimal();
		AAnimal(std::string type);
		AAnimal(const AAnimal& cpy);
		virtual ~AAnimal();
		AAnimal &operator=(const AAnimal& rhs);
		virtual void makeSound() const = 0;
		virtual std::string getType() const;
		virtual Brain &getBrain() const = 0;
};

#endif
