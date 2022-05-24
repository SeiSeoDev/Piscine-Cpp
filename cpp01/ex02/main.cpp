#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "str: " << &str << " | ptr: " << stringPTR << " | ref: " << &stringREF << std::endl;
	std::cout << "str: " << str << " | ptr: " << *stringPTR << " | ref: " << stringREF << std::endl;
	return (0);
}