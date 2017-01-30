// Este programa obtem 2 numeros inteiros do usuario,
// soma e exibe o resultado dos 2.
// Neste as funcoes estao reunidas em outro arquivo (io.cpp).
// Criado por Luan Eduardo.
// Perfil GitHub: https://github.com/JasonBrody47

#include "stdafx.h"
#include <iostream>

// Forward declaration (declaracao prototipo).
int readNumber();
void writeAnswer(int result);

/* Funcao principal: Guarda o valor de 2 numeros por meio de readNumber(),
 * faz a soma deles e envia como argumento para whiteAnswer();
*/
int main()
{
	int number_1 = readNumber();
	int number_2 = readNumber();
	// int sum =  number_1 + number_2;
	writeAnswer(number_1 + number_2);

	std::cin.get();

    return 0;
}

