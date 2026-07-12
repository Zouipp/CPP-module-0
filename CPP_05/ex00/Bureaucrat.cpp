#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	std::cout << "Default constructor has been called !" << std::endl;
	this->name = name;
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
	std::cout << "Copy constructor has been called !" << std::endl;
	this->name = other.name;
	this->grade = other.grade;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Default destructor has been called !" << std::endl;
}

Bureaucrat& Bureaucrat::operator<<(const Bureaucrat& other)
{
	
}