#include "dog.h"

Dog::Dog() : Animal(),
	_brain(new Brain)
{
	type = "Dog";
	std::cout << "Dog created." << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other),
	_brain(new Brain)
{
	*_brain = *other._brain;
	std::cout << "Dog copy created." << std::endl;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog destroyed." << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "wouf" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	Animal::operator=(other);
	*_brain = *other._brain;
	return *this;
}

Brain *Dog::brain() const
{
	return _brain;
}
