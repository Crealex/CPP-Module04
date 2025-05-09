
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal& cpy);
		~Animal();
		Animal &operator=(const Animal& rhs);
		void makeSound() const;
		std::string getType() const;
};

#endif
