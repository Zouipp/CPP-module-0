#include "cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "A cat is born !" << std::endl;
	this->type = "Cat";
}

Cat::~Cat(void)
{
	std::cout << "A cat has passed away..." << std::endl;
}

void Cat::makeSound(void)
{
	std::cout << "Meow !" << std::endl;
}