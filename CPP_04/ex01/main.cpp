#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"

int main()
{
	Dog a;
	a.setIdea(0, "I love bones");
	
	Dog b(a);   // constructeur de copie
	
	std::cout << "a: " << a.getIdea(0) << std::endl;
	std::cout << "b: " << b.getIdea(0) << std::endl;
	
	// on modifie a APRES la copie
	a.setIdea(0, "I hate cats");
	
	std::cout << "--- apres modif de a ---" << std::endl;
	std::cout << "a: " << a.getIdea(0) << std::endl;
	std::cout << "b: " << b.getIdea(0) << std::endl;   // doit rester "I love bones" !
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	return 0;
}
