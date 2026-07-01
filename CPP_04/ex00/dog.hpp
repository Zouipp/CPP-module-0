#include "animal.hpp"

class Dog : public Animal
{
	public :
		Dog();
		~Dog();
		void makeSound(void);
		void getType(void);
};