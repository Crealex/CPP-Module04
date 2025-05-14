
#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter
{
	private:

		std::string _name;
		AMateria *_inventory[4];

	public:

		Character();
		Character(std::string name);
		Character(const Character& cpy);
		~Character();
		Character &operator=(const Character& rhs);

		std::string const & getName() const = 0;
		void equip(AMateria* m) = 0;
		void unequip(int idx) = 0;
		void use(int idx, ICharacter& target) = 0;
};

#endif
