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
	
	~Zombie();
	Zombie(std::string name);
	
	void announce(void)
	{
		std::cout << name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
	}
};

typedef struct s_zombie
{
	t_zombie *next;
	Zombie *zombie;
}	t_zombie;

Zombie* zombieHorde( int N, std::string name );