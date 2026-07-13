#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form : public Bureaucrat
{
	private :
		const std::string name;
		bool issigned = false;
		const int gsign;
		const int gexe;
	public :
		Form(int grade, int gexe, int gsign);
		~Form();
		Form(const Form& other);
		Form& operator=(const Form& other);
		void BeSinged(Bureaucrat bureaucrat);
		class GradeTooLowException : public std::exception
		{
			public :
			const char* what() const throw();
		};
};

#endif