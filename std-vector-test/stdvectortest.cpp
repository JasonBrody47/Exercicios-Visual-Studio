// std::vector test

#include "stdafx.h"
#include <iostream>
#include <vector>

void printVector(const std::vector<int> &my_vector);

int main()
{
    std::vector<int> my_vector{ 4, 7, 2, 6 };

    std::cout << "Tamanho do vetor: " << my_vector.size() << "\n\n";
    printVector(my_vector);

    my_vector.resize(5);

    std::cout << "\n\nTamanho do vetor: " << my_vector.size() << "\n\n";
    printVector(my_vector);

    std::cin.get();
    return 0;
}

void printVector(const std::vector<int> &my_vector)
{
    for (const auto &i : my_vector)
        std::cout << i << " ";
}

