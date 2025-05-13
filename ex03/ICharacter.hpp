
#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

class ICharacter
{
	private:

	public:
		ICharacter();
		ICharacter(const ICharacter& cpy);
		~ICharacter();
		ICharacter &operator=(const ICharacter& rhs);
};

#endif
