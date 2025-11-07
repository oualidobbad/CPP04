#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called" <<std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const std::string& type)
{
	std::cout << "WrongAnimal paratmter constractor called" << std::endl;
	this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal& animal)
{
	std::cout << "WrongAnimal copy constractor called" << std::endl;
	this->type = animal.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& animal)
{
	std::cout << "WrongAnimal copy assingnment constractor called" << std::endl;
	this->type = animal.type;
	return *this;
}

std::string WrongAnimal::getType() const
{
	return type;
}
void WrongAnimal::makeSound() const
{
	std::cout << "sound WrongAnimal" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "destructor WrongAnimal called" << std::endl;
}