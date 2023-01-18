#ifndef CAT_H
#define CAT_H

#include <iostream>
#include "animal.h"
#include "brain.h"

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat& other);
	~Cat();

	virtual void makeSound() const;

	Cat& operator=(const Cat& other);

	Brain *brain() const;

private:
	Brain* _brain;
};

#endif // CAT_H
