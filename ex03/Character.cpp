#include "Character.hpp"

Character::Character(const std::string& name): _name(name)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character& other): _name(other._name){

	for (int i = 0; i < 4; i++)
	{
		if (other._inventory[i])
			this->_inventory[i] = other._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
}

Character& Character::operator=(const Character& other)
{
	if (&other == this)
		return *this;
	for (int i = 0; i < 4; i++)
	{
		delete this->_inventory[i];
		if (other._inventory[i])
			this->_inventory[i] = other._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	this->_name = other._name;
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete _inventory[i];
}

std::string const& Character::getName() const
{
	return _name;
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 4 && idx >= 0)
		this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 4 && idx > -1 && _inventory[idx])
		_inventory[idx]->use(target);
}

