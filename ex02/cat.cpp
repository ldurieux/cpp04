#include "cat.h"

Cat::Cat() : Animal(),
	_brain(new Brain)
{
	type = "Cat";
	std::cout << "Cat created." << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other),
	_brain(new Brain)
{
	*_brain = *other._brain;
	std::cout << "Cat copy created." << std::endl;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat destroyed." << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "miaou" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	Animal::operator=(other);
	*_brain = *other._brain;
	return *this;
}

Brain *Cat::brain() const
{
	return _brain;
}
