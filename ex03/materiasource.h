#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "imateriasource.h"
#include "amateria.h"

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	~MateriaSource();

	void learnMateria(AMateria*materia);
	AMateria* createMateria(const std::string& type);

private:
	AMateria* _templates[4];
};

#endif // MATERIASOURCE_H
