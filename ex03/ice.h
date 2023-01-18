#ifndef ICE_H
#define ICE_H

#include "amateria.h"

class Ice : public AMateria
{
public:
	Ice();

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif // ICE_H
