#include <iostream>
#include "dog.h"
#include "cat.h"

int main()
{
	Animal *animals[6];
	for (int i = 0; i < 3; i++)
		animals[i] = new Cat;
	for (int i = 3; i < 6; i++)
		animals[i] = new Dog;
	std::cout << std::endl;
	for (int i = 0; i < 6; i++)
		animals[i]->makeSound();
	std::cout << std::endl;
	for (int i = 0; i < 6; i++)
		delete animals[i];
	std::cout << std::endl;

	Cat cat1;
	cat1.brain()->idea(0) = "HEY";
	Cat cat2(cat1);
	cat2.brain()->idea(0) = "OY";

	std::cout << std::endl;
	std::cout << cat1.brain()->idea(0) << std::endl;
	std::cout << cat2.brain()->idea(0) << std::endl;
	std::cout << std::endl;

//	Animal animal;

	return (0);
}
