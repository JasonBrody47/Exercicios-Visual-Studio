#include <iostream>
#include <cstdint>
#include <string>
#include <cmath>

int32_t getUserNumber();
bool isValidNumber();
std::string decimalToBinary(uint32_t decimal);
std::string reverseString(std::string input);
uint32_t binaryToDecimal(std::string binary);

int main()
{
    std::string binary{ decimalToBinary(static_cast<uint32_t>(getUserNumber())) };
    std::cout << binary << "\n";

    int32_t decimal_converted { static_cast<int32_t>(binaryToDecimal(binary)) };
    std::cout << decimal_converted << "\n";

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
        std::cerr << "Valor invalido!\n";
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        return true;
    }
    std::cin.ignore(32767, '\n');
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
    int32_t last{ static_cast<int32_t>(input.length() - 1) };
    char temp;

    for (int32_t first = 0; first < last + 1; first++, last--)
    {
         if (input[first] != input[last])
        {
            temp = input[first];
            input[first] = input[last];
            input[last] = temp;
        }
    }

    return input;
}

uint32_t binaryToDecimal(std::string binary)
{
    uint32_t decimal{ 0 }, exponent{ 0 };
    int32_t last{ static_cast<int32_t>(binary.length() - 1) };

    for (; last >= 0; last--, exponent++)
    {
         if (binary[last] == '1')
            decimal += std::pow(2, exponent);
    }

    return decimal;
}