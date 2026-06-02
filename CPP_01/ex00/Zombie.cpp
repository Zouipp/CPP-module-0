#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie *zombie;
    zombie = new Zombie();
    if (!zombie)
        return (NULL);
    zombie->set_name(name);
    return (zombie);
}

void randomChump(std::string name)
{
    Zombie zombie[1];
    zombie->set_name(name);
    delete (zombie);
    return ;
}