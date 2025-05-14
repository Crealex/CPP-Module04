
#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice: public AMateria
{
	private:

	public:
		Ice();
		Ice(const Ice& cpy);
		~Ice();
		Ice &operator=(const Ice& rhs);
		AMateria *clone() const;
		void use(ICharacter& target);
};

#endif
