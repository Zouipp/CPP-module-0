#ifndef CAT_HPP
#define CAT_HPP

#include "animal.hpp"

class Cat : public Animal
{
	public :
		Cat(void);
		~Cat();
		virtual  void makeSound(void) const;
};

#endif