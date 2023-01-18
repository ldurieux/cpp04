#ifndef CHARACTERGARBAGE_H
#define CHARACTERGARBAGE_H

#include "amateria.h"

class CharacterGarbage
{
public:
	CharacterGarbage();
	~CharacterGarbage();

	void add(AMateria *materia);
	void clean();

private:
	struct Node
	{
		AMateria* value;
		Node* next;
	};

	Node* _first;
	Node* _last;
};

#endif // CHARACTERGARBAGE_H
