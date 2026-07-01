#include "animal.hpp"

void Animal::makeSound(void)
{
	std::cout << this->type << " is making a sound !" << std::endl;
}

Animal::Animal(void)
{
	std::cout << type << " is born !" << std::endl;
	this->type = "Animal";
}

Animal::~Animal(void)
{
	std::cout << this->type << " has died..." << std::endl;
}

void Animal::getType(void)
{
	std::cout << this->type;
}