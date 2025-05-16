
#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria *_materias[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& cpy);
		~MateriaSource();
		MateriaSource &operator=(const MateriaSource& rhs);
		void learnMateria(AMateria * materia);
		AMateria *createMateria(std::string const & type);
};

#endif
