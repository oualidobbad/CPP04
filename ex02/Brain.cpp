#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}
Brain::Brain(const Brain& brain)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
			this->ideas[i] = brain.ideas[i];
}

Brain& Brain::operator=(const Brain& brain)
{
	std::cout << "Brain assignment operator constructor called" << std::endl;
	if (this != &brain)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = brain.ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}


