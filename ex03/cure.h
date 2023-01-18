#ifndef CURE_H
#define CURE_H

#include "amateria.h"

class Cure : public AMateria
{
public:
	Cure();

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif // CURE_H
