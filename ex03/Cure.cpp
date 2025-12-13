#include "Cure.hpp"

Cure::Cure()
{
	type = "cure";
}

Cure::Cure(const Cure& cure): AMateria(cure)
{

}

Cure& Cure::operator=(const Cure& cure)
{
	if (this != &cure)
		AMateria::operator=(cure);
	return *this;
}

Cure::~Cure()
{

}

void Cure::use (ICharacter& target)
{
	std::cout << "Cure: * heals " << target.getName() <<"’s wounds *" << std::endl;
}

Cure* Cure::clone() const
{
	Cure *cure = new Cure(*this);
	return cure;
}
