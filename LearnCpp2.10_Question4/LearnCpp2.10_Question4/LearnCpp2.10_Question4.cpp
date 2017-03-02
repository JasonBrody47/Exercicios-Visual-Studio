// Este programa calcula a queda livre de uma bola numa altura determinada pelo usuario.
// Criado por Luan Eduardo.
// Perfil GitHub: https://github.com/LuanEduardo47

#include "stdafx.h"
#include "Functions.h"
#include <iostream>

/* Funcao Principal: faz a ligacao entre as funcoes de Functions.h.
*/
int main()
{
	const double initial_height{ getTowerHeight() };
	calculateBallHeight(initial_height);

	// Aguarda um Enter do usuario.
	std::cin.get();

    return 0;
}


