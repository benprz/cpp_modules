#ifndef AMATERIA_H
#define AMATERIA_H
	
#include "ICharacter.hpp"

#include <iostream>

class AMateria  
{
	private:

	public:

		AMateria(std::string const &type);
		~AMateria();

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};
#endif