// Este programa pede ao usuario 2 numeros Double's e um operador,
// e faz os calculos conforme o operador. Depois o resultado e exibido na tela.
// Criado por Luan Eduardo.
// Perfil GitHub: https://github.com/LuanEduardo47

#include "stdafx.h"
#include "Functions.h"
#include <iostream>

/* Funcao Principal:
 * Faz a chamada das funcoes e recebe os parametros delas.
*/
int main()
{
    // As variaveis abaixo servem para encaminhamento e DEBUG de valores entre as funcoes.
    double number_1{ getUserDoubleNumber() };
    double number_2{ getUserDoubleNumber() };
    char math_operator{ getUserOperator() };
    double result{ calculateDoubleOperation(number_1, math_operator, number_2) };
    printCalculatedResult(number_1, math_operator, number_2, result);

    // Aguarda um Enter do usuario.
    std::cin.get();

    return 0;
}
