#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string type;

	public:
		virtual ~AMateria();
		AMateria(){}
		AMateria(std::string const & type);
		AMateria(const AMateria& materia);
		AMateria& operator=(const AMateria& materia);
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};
#endif
