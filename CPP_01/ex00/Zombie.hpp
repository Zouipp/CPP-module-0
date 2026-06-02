#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string>

class Zombie
{
    private :

    std::string name;

    public :

    void announce(void)
    {
        std::cout << name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
    }

    void set_name(std::string new_name)
    {
        name = new_name;
    }
};