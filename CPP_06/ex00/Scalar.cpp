#include "Scalar.hpp"
#include <cctype>

void ScalarConverter::convert(std::string input)
{
	if (input.length() == 0)
		/*gestion d'erreur*/;
	else if (input.length() == 1)
	{
		if (isalpha(input[0]))
			std::cout << "Char : " << input << std::endl;
		else if (isdigit(input[0]))
			std::cout << "Int : " << input << std::endl;
		else
			/*gestion d'erreur*/;
	}
	else if (input == "-inff")
		/*handle case*/;
	else if (input == "+inff")
		/*handle case*/;
	else if (input == "nanf")
		/*handle case*/;
	else if (is_char(input))
		exit ;
	else if (is_float(input))
		/*handle case*/;
	else if (is_int(input))
		/*handle case*/;
}

bool is_char(std::string input)
{
	int i = 0;
	while (input[i])
	{
		if (input[i] >= 7 && input[i] <= 32)
			i++;
		else if (input[i] == '\'')
		{
			if (input[i + 2] == '\'')
			{
				/*print en char (est ce que je dois traiter le cas 'c'akdsf )*/;
				return (true);
			}
			else
			{
				/*sortie d'erreur*/;
				return (false);
			}
		}
	}
}

bool is_float(std::string input)
{
	int i = 0;
	while (input[i])
	{
		if (input[i] == '.')
			break ;
		i++;
	}
	if (i == input.length())
		return (false);
	std::cout << "Float : " << atof(input.c_str()) << std::endl;
	return (true);
}

bool is_int(std::string input)
{
	int res = atoi(input.c_str());
	if (res == 0)
	{
		int i = 0;
		while (input[i] == '+' || input[i] == '-' || input[i] == ' ')
			i++;
		if (input[i] != '0')
			return (false);
	}
	std::cout << "Int : 0" << std::endl;
	return (true);
}

bool is_double(std::string input)
{
	
}