#include "dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "A dog is born !" << std::endl;
	this->type = "Dog";
}

Dog::~Dog(void)
{
	std::cout << "A dog has died..." << std::endl;
}

void Dog::makeSound(void)
{
	std::cout << "The dog barked" << std::endl;
}
