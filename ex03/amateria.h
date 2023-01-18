#ifndef AMATERIA_H
#define AMATERIA_H

#include <string>
#include <iostream>
#include "icharacter.h"

class AMateria
{
public:
	AMateria(const std::string& type);
	virtual ~AMateria();

	const std::string& getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

protected:
	std::string _type;
};

#endif // AMATERIA_H
