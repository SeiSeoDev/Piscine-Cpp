#include "Zombie.hpp"

int main()
{
    std::string str;

    str = "Kiwi";
    randomChump("Tomate");
    randomChump(str);
    randomChump(str = "Cacahuete");
    return (0);
}