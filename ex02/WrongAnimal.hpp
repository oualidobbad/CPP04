#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;

	public:
		WrongAnimal();
		WrongAnimal(const std::string& type);
		WrongAnimal(const WrongAnimal& animal);
		WrongAnimal& operator=(const WrongAnimal& animal);
		~WrongAnimal();
		void makeSound() const;
		std::string getType() const;
};

#endif