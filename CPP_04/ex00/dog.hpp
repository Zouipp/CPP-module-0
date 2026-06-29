#include "animal.hpp"

class Dog : protected Animal
{
	public :
		Dog();
		~Dog(void);
		void makeSound(void);
		void getType(void);
};