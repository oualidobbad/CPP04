#include "WrongCat.hpp"


WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& cat):WrongAnimal(cat)
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& cat)
{
	WrongAnimal::operator=(cat);
	std::cout << "WrongCat assingnment operator constructor called" << std::endl;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat Meao!" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}
