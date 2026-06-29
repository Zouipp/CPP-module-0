#include "animal.hpp"

class Cat : protected Animal
{
	public :
		Cat(void);
		~Cat(void);
		void makeSound(void);
};