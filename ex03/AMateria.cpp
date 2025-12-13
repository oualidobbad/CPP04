#include "AMateria.hpp"

AMateria::AMateria(std::string const& type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria& materia)
{
	this->type = materia.type;
}

AMateria& AMateria::operator=(const AMateria& materia)
{
	(void)materia;
	return *this;
}

AMateria::~AMateria()
{
	
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}

std::string const& AMateria::getType() const
{
	return this->type;
}