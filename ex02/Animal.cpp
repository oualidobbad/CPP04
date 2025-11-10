#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constractor called" << std::endl;
	this->type = "Animal";
}
Animal::Animal(const std::string& type)
{
	std::cout << "Animal paratmter constractor called" << std::endl;
	this->type = type;
}
Animal::Animal(const Animal& animal)
{
	std::cout << "Animal copy constractor called" << std::endl;
	this->type = animal.type;
}

Animal& Animal::operator=(const Animal& animal)
{
	std::cout << "Animal copy assingnment constractor called" << std::endl;
	this->type = animal.type;
	return *this;
}
std::string Animal::getType() const
{
	return type;
}

Animal::~Animal()
{
	std::cout << "destructor Animal called" << std::endl;
}
