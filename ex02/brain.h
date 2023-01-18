#ifndef BRAIN_H
#define BRAIN_H

#include <string>
#include <iostream>

class Brain
{
public:
	Brain();
	Brain(const Brain& other);
	~Brain();

	Brain& operator=(const Brain& other);

	std::string& idea(int idx);

private:
	std::string _ideas[100];
};

#endif // BRAIN_H
