#ifndef WRONGCAT_H
#define WRONGCAT_H

#include <iostream>
#include "wronganimal.h"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat& other);
	~WrongCat();

	void makeSound() const;

	WrongCat& operator=(const WrongCat& other);
};

#endif // WRONGCAT_H
