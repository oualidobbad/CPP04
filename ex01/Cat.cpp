#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat constructor called" << std::endl;
	brain = new Brain();
}

Cat::Cat(const Cat& cat):Animal(cat)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	this->brain = new Brain();
	*this->brain = *cat.brain;
}

Cat& Cat::operator=(const Cat& cat)
{
	Animal::operator=(cat);
	std::cout << "Cat assingnment operator constructor called" << std::endl;
	if (this != &cat)
	{
		delete this->brain;
		this->brain = new Brain();
		*this->brain = *cat.brain;
	}
	return (*this);
}
void Cat::makeSound() const
{
	std::cout << "Cat Meao!" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete brain;
}
