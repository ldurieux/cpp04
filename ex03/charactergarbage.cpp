#include "charactergarbage.h"

CharacterGarbage::CharacterGarbage() :
	_first(NULL),
	_last(NULL)
{

}

CharacterGarbage::~CharacterGarbage()
{
	clean();
}

void CharacterGarbage::add(AMateria* materia)
{
	if (!_first)
	{
		_first = new Node();
		_first->value = materia;
		_first->next = NULL;
		_last = _first;
		return;
	}
	_last->next = new Node();
	_last = _last->next;
	_last->value = materia;
	_last->next = NULL;
}

void CharacterGarbage::clean()
{
	Node *node;
	Node *tmp;

	node = _first;
	while (node)
	{
		tmp = node;
		delete node->value;
		node = node->next;
		delete tmp;
	}
	_first = NULL;
	_last = NULL;
}
