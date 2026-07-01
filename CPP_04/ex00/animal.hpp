#include <iostream>
#include <string>

class Animal
{
	protected :
		std::string type;
	public :
		Animal();
		~Animal();
		void makeSound(void);
		void getType(void);
};