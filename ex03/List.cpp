
#include "List.hpp"

List::List(): _node(0)
{

}

List::~List()
{
	while (this->_node)
	{
		Node *tmp = this->_node;
		this->_node = this->_node->next;
		if (tmp->content)
			delete tmp->content;
		if (tmp)
			delete tmp;
	}
	std::cout << "test List destructor" << std::endl;
}

void List::addElem(AMateria *elem)
{
	Node *newNode = new Node();
	newNode->content = elem;
	newNode->next = NULL;
	if (!this->_node)
	{
		this->_node = newNode;
		//std::cout << "test" << std::endl;
		return;
	}
	while (this->_node->next)
		this->_node = this->_node->next;
	this->_node->next = newNode;
}