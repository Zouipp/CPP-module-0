#include "sed_is_for_loosers.hpp"

std::string open_and_return_file(char *filename, std::string s1, std::string s2)
{
	int				len = 0;
	const char		*ptr = NULL;
	std::string		res;
	std::string		line;
	std::string		content;
	std::ifstream	file;

	file.open(filename);
	if (!file.is_open())
	{
		std::cerr << "Unvalid file name" << std::endl;
		return (NULL);
	}
	while (std::getline(file, line))
		content += line + "\n";
	content[content.size() - 1] = '\0';
	while (true)
	{
		ptr = strstr(content.substr(len).c_str(), s1.c_str());
		res += content.substr(len, strlen(ptr));
		res += s2;
		len += strlen(ptr) + s1.size();
		if ((size_t)len != content.size())
		{
			res += content.substr(len) + "\n";
			break ;
		}
	}
	file.close();
	return (res);
}