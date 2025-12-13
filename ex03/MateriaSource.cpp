#include "MateriaSource.hpp"

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!templates[i] && m)
		{
			templates[i] = m->clone();
			break;
		}
	}
	delete m;
}
AMateria* MateriaSource::createMateria(std::string const type)
{
	for (int i = 0; i < 4; i++)
	{
		if (templates[i] && templates[i]->getType() == type)
			return templates[i]->clone();
	}
	return NULL;

}
MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		templates[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	for (int i = 0; i < 4; i++)
	{
		if (other.templates[i])
			this->templates[i] = other.templates[i]->clone();
		else
			this->templates[i] = NULL;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	if (&other == this)
		return *this;
	for (int i = 0; i < 4; i++)
	{
		delete this->templates[i];
		if (other.templates[i])
			this->templates[i] = other.templates[i]->clone();
		else
			this->templates[i] = NULL;
	}
	return *this;
}


MateriaSource::~MateriaSource()
{
	for (int i =0; i < 4; i++)
		delete templates[i];
}
