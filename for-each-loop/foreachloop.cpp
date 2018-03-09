#include <iostream>
#include <string>

int main()
{
    std::string names[]{ "Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly" };

    std::cout << "Insira um nome > ";
    std::string user_name;
    std::getline(std::cin, user_name);

    bool wasFound{ false };
    for (const auto &name : names)
    {
        if (name == user_name)
        {
            wasFound = true;
            break;
        }
    }
    if (wasFound)
        std::cout << user_name << " foi encontrado no array.\n";
    else
        std::cout << user_name << " nao foi encontrado no array.\n";

    std::cin.get();
    return 0;
}

