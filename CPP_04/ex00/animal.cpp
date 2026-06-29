#include "animal.hpp"

void Animal::makeSound(void)
{
	std::cout << this->type << " is making a sound !" << std::endl;
}

Animal::Animal(std::string type)
{
	std::cout << type << " is born !" << std::endl;
	this->type = type;
}

Animal::~Animal(void)
{
	std::cout << this->type << " has died..." << std::endl;
}

void Animal::getType(void)
{
	std::cout << this->type;
}