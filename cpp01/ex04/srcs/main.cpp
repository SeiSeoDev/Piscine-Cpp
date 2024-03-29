#include <iostream>
#include <fstream>

std::string	replace_str(std::string str, int start, int end, char *replace)
{
	int	i;
	int	j;
	std::string	bot;
	std::string	mid;
	std::string	top;

	i = start;
	j = end;
	bot.assign(str, 0, start);
	mid = replace;
	top.assign(str, end, str.length() - end);
	return (bot + mid + top);
}

int main(int ac , char **av)
{
	if (ac != 4)
	{
		std::cout << "Wrong arguments\n";
		return (0);
	}
	if (!av[1] || !av[2] || !av[3] || av[1][0] == '\0' || av[2][0] == '\0')
	{
		std::cout << "Arguments wrong format\n";
		return (0);
	}
	std::ifstream is (av[1], std::ifstream::in);
	if (is)
	{
		// get length of file:
		is.seekg (0, is.end);
		int	length = is.tellg();
		is.seekg (0, is.beg);
		char	*buffer = new char [length + 1];
		std::cout << "Reading " << length << " characters... ";
		// read data as a block:
		is.read (buffer, length);
		if (is)
		  std::cout << "all characters read successfully.\n";
		else
		{
			std::cout << "error: only " << is.gcount() << " could be read\n";
			return (0);
		}
		is.close();
		int	i = 0;
		int j = 0;
		int tmp = 0;
		std::string	str = std::string(buffer);
		delete[] buffer;
		while (str[i])
		{
			j = 0;
			tmp = i;
			while (str[i] && av[2][j] && str[i] == av[2][j])
			{
				j++;
				i++;
			}
			if (av[2][j] == '\0')
			{
				str = replace_str(str, tmp, i, av[3]);
				j = 0;
				while (av[3][j])
					j++;
				tmp += j - 1;
			}
			i = tmp + 1;
		}
		std::fstream fs;
		std::string con = av[1];
		std::string cat = ".replace";
		std::string fname = con + cat;
 		fs.open (fname.c_str(), std::fstream::in | std::fstream::out | std::fstream::trunc);
		if (fs.is_open())
		{
 			fs << str;
			fs.close();
		}
		else
			std::cout << "failed to open file\n";
	}
	else
		std::cout << "no read...\n";
}