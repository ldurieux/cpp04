#include "animal.h"

Animal::Animal()
{
	std::cout << "Animal created." << std::endl;
}

Animal::Animal(const Animal &other) :
	type(other.type)
{
	std::cout << "Animal copy created." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destroyed." << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	type = other.type;
	return (*this);
}

const std::string &Animal::getType() const
{
	return type;
}
