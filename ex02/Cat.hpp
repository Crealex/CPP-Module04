
#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat: public AAnimal
{
	private:
		Brain *_brain;
	public:
		Cat();
		Cat(const Cat& cpy);
		~Cat();
		Cat &operator=(const Cat& rhs);
		void makeSound() const;
		Brain &getBrain() const;
};

#endif
