
#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat: public Animal
{
	private:

	public:
		Cat();
		Cat(const Cat& cpy);
		~Cat();
		Cat &operator=(const Cat& rhs);
		void makeSound() const;
};

#endif
