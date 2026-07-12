#include <string>
#include <iostream>

class Bureaucrat
{
	private :
		std::string name;
		int grade;
	public :
		~Bureaucrat(void);
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat(std::string name, int grade);
		Bureaucrat& operator<<(const Bureaucrat& other);
}