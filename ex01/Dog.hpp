
#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain *_brain;
	public:
		Dog();
		Dog(const Dog& cpy);
		~Dog();
		Dog &operator=(const Dog& rhs);
		void makeSound() const;
		Brain &getBrain() const;
};

#endif
