
#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	private:

	public:
		WrongCat();
		WrongCat(const WrongCat& cpy);
		~WrongCat();
		WrongCat &operator=(const WrongCat& rhs);
		void makeSound() const;
};

#endif
