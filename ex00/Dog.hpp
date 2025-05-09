
#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog: public Animal
{
	private:

	public:
		Dog();
		Dog(const Dog& cpy);
		~Dog();
		Dog &operator=(const Dog& rhs);
		void makeSound() const;
};

#endif
