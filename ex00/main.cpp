#include <iostream>
#include "dog.h"
#include "cat.h"
#include "wrongcat.h"

int main()
{
	std::cout << "\tCORRECT:" << std::endl;
	{
		Animal *animals[3];
		animals[0] = new Animal();
		animals[1] = new Dog();
		animals[2] = new Cat();

		std::cout << "----" << std::endl;
		for (int i = 0; i < 3; i++)
			std::cout << animals[i]->getType() << std::endl;
		std::cout << "----" << std::endl;
		for (int i = 0; i < 3; i++)
			animals[i]->makeSound();
		std::cout << "----" << std::endl;
		for (int i = 0; i < 3; i++)
			delete animals[i];
	}
	std::cout << std::endl << std::endl;

	std::cout << "\tWRONG:" << std::endl;
	{
		WrongAnimal *animals[2];
		animals[0] = new WrongAnimal();
		animals[1] = new WrongCat();

		std::cout << "----" << std::endl;
		for (int i = 0; i < 2; i++)
			std::cout << animals[i]->getType() << std::endl;
		std::cout << "----" << std::endl;
		for (int i = 0; i < 2; i++)
			animals[i]->makeSound();
		std::cout << "----" << std::endl;
		for (int i = 0; i < 2; i++)
			delete animals[i];
	}

	return (0);
}
