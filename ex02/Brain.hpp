
#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private:
		std::string _ideas[100];
	public:
		Brain();
		Brain(const Brain& cpy);
		~Brain();
		Brain &operator=(const Brain& rhs);
		void setIdea(int n, std::string idea);
		std::string getIdea(int n) const;
};

#endif
