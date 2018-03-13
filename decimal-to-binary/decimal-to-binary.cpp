#include <iostream>
#include <cstdint>
#include <string>

int32_t getUserNumber();
bool isValidNumber();
std::string decimalToBinary(uint32_t decimal);
std::string reverseString(std::string input);

int main()
{
    std::string binary{ decimalToBinary(static_cast<uint32_t>(getUserNumber())) };
    std::cout << binary << "\n";

    std::cin.get();
    return 0;
}

int32_t getUserNumber()
{
    int32_t number;
    while (true)
    {
        std::cout << "Insira um numero inteiro > ";
        std::cin >> number;

        if (!isValidNumber())
            break;
    }
    return number;
}

bool isValidNumber()
{
    if (std::cin.fail())
    {
        std::cerr << "Este valor excede o limite de um inteiro de 32 bits!\n";
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        return true;
    }
    return false;
}

std::string decimalToBinary(uint32_t decimal)
{
    std::string binary{};

    while (decimal)
    {
        if (decimal % 2)
            binary += "1";
        else
            binary += "0";
            
        decimal /= 2;
    }
    
    return binary = reverseString(binary);
}

std::string reverseString(std::string input)
{
    int32_t first{ 0 };
    int32_t last{ static_cast<int32_t>(input.length() - 1) };
    char temp;

    while (first < last + 1)
    {
        if (input[first] != input[last])
        {
            temp = input[first];
            input[first] = input[last];
            input[last] = temp;
        }
        ++first;
        --last;
    }
    return input;
}