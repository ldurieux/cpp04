#ifndef DOG_H
#define DOG_H

#include <iostream>
#include "animal.h"
#include "brain.h"

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog& other);
	~Dog();

	virtual void makeSound() const;

	Dog &operator=(const Dog& other);

	Brain *brain() const;

private:
	Brain* _brain;
};

#endif // DOG_H
