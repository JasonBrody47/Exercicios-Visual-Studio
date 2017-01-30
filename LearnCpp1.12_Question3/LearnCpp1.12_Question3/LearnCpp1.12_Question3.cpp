// Este programa obtem 2 numeros inteiros do usuario,
// soma e exibe o resultado dos 2.
// Neste as funcoes estao reunidas em outro arquivo (io.cpp)
// E o arquivo io.cpp e chamado pelo cabecalho io.h. 
// Criado por Luan Eduardo.
// Perfil GitHub: https://github.com/JasonBrody47

#include "stdafx.h"
#include "io.h"
#include <iostream>

int main()
{
	int number_1 = readNumber();
	int number_2 = readNumber();
	// int sum = number_1 + number_2;
	writeAnswer(number_1 + number_2);

	std::cin.get();

    return 0;
}

