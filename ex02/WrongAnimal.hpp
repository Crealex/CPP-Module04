
#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string _type;
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal& cpy);
		~WrongAnimal();
		WrongAnimal &operator=(const WrongAnimal& rhs);
		void makeSound() const;
		std::string getType() const;
};

#endif

