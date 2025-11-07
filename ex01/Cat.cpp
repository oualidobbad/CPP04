#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& cat):Animal(cat)
{
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& cat)
{
	Animal::operator=(cat);
	std::cout << "Cat assingnment operator constructor called" << std::endl;
	return (*this);
}
void Cat::makeSound() const
{
	std::cout << "Cat Meao!" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}
