#include <iostream>
#include <string>

class Animal
{
	protected :
		std::string type;
	public :
		Animal(std::string type);
		~Animal(void);
		void makeSound(void);
		void getType(void);
};