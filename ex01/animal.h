#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal
{
public:
	Animal();
	Animal(const Animal& other);
	virtual ~Animal();

	virtual void makeSound() const;

	Animal& operator=(const Animal& other);

	const std::string& getType() const;

protected:
	std::string type;
};

#endif // ANIMAL_H
