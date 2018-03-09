// std::array test

#include <iostream>
#include <array>
#include <algorithm>

void printArray(const std::array<int, 5> &my_array);

int main()
{
    std::array<int, 5> my_array{ 6, 1, 3, 8, 4 };

    std::cout << "Tamanho do array (quantidade de elementos) : " << 
        my_array.size() << "\n\n";

    std::cout << "Array desordenado:\n";
    printArray(my_array);

    // Ordena em ordem crescente.
    std::cout << "\n\nArray ordenado em ordem crescente:\n";
    std::sort(my_array.begin(), my_array.end());
    printArray(my_array);

    // Ordena em ordem decrescente.
    std::cout << "\n\nArray ordenado em ordem decrescente:\n";
    std::sort(my_array.rbegin(), my_array.rend());
    printArray(my_array);

    std::cin.get();
    return 0;
}

void printArray(const std::array<int, 5> &my_array)
{
    for (const auto &i : my_array)
        std::cout << i << " ";
}
