#include "Form.hpp"

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low to sign, stick to your job");
}