
#include "AMateria.hpp"

struct Node
{
	AMateria	*content;
	Node		*next;
};


struct List
{
	private:
		Node *_node;
	public:
		List();
		~List();
		void addElem(AMateria *elem);
};
