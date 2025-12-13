#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
}

Ice::Ice(const Ice& ice): AMateria(ice)
{

}

Ice& Ice::operator=(const Ice& ice)
{
	std::cout << "assignment operator called" << std::endl;
	if (&ice != this)
		AMateria::operator=(ice);
	return *this;
}

Ice::~Ice()
{
	
}

void Ice::use (ICharacter& target)
{
	std::cout << "Ice: * shoots an ice bolt at " << target.getName() <<" *" << std::endl;
}

Ice* Ice::clone() const
{
	Ice *ice = new Ice(*this);
	return ice;
}
