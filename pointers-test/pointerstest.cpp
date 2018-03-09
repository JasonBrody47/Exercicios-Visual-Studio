// Testes básicos com ponteiros.

#include "stdafx.h"
#include <iostream>
#include <typeinfo>

int main()
{
    int x{ 9 };
    std::cout << "Valor da variavel 'x': " << x << "\n";
    std::cout << "Endereco da variavel 'x': " << &x << "\n";
    std::cout << "Valor contido no endereco de memoria da variavel 'x': " << *&x << "\n";

    int *pointer{ &x };
    std::cout << "Endereco armazenado em 'pointer': " << pointer << "\n";

    std::cout << "\nTipo de ponteiro retornado por &(address-of) da variavel 'x': " << 
        typeid(&x).name() << "\n\n";

    std::cout << "Valor da variavel('x') que esta sendo apontada por 'pointer': " <<
        *pointer << "\n";

    std::cout << "Tamanho do ponteiro 'pointer' : " << sizeof(pointer) << "\n";

    std::cin.get();

    return 0;
}

