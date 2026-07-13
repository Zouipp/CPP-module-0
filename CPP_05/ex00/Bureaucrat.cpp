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

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other)
	{
		this->grade = other.grade;
		this->name = other.name;
	}
	return *this;
}

Bureaucrat& Bureaucrat::operator<<(const Bureaucrat& other)
{
	std::cout << this->name << ", bureaucrat grade " << this->grade << std::en
}

int Bureaucrat::getGrade()
{
	return (this->grade);
}

std::string Bureaucrat::getName()
{
	return (this->name);
}

void Bureaucrat::increaseGrade()
{
	if (grade - 1 <= 0)
		throw GradeTooHighException;
	this->grade--;
	std::cout << this->name << " has been promoted to #" << this->grade << " !" << std::endl;
}

void Bureaucrat::decreaseGrade()
{
	if (this->grade + 1 > 150)
		throw GradeTooLowException;
	this->grade++;
	std::cout << this->name << " has been demoted to #" << this->grade << " !" << std::endl;
}

void Bureaucrat::GradeTooHighException()
{
	std::cout << "Unvalid grade, is Top 1 not enough ?" << std::endl;
}
void  Bureaucrat::GradeTooLowException()
{
	std::cout << "I'm sorry you're already the last one, but you can still rise !" << std::endl;
}