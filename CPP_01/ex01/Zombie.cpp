#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie(void)
{
	std::cout << "The zombie named " << name << " has been deleted." << std::endl;
}
