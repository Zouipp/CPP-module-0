#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Bureaucrat
{
	private :
		std::string name;
		int grade;
	public :
		int getGrade();
		~Bureaucrat(void);
		void increaseGrade();
		void decreaseGrade();
		std::string getName();
		void GradeTooLowException();
		void GradeTooHighException();
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat(std::string name, int grade);
		Bureaucrat& operator=(const Bureaucrat& other);
		Bureaucrat& operator<<(const Bureaucrat& other);
};

#endif