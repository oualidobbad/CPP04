#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& dog):Animal(dog)
{
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& dog)
{
	Animal::operator=(dog);
	std::cout << "Dog assingnment operator constructor called" << std::endl;
	return (*this);
}
void Dog::makeSound() const
{
	std::cout << "Dog Bark!" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}
