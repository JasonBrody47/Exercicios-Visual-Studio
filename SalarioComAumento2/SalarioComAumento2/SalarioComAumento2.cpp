// Esse programa recebe o salario de um funcionario e o percentual de aumento, calcula e mostra
// o valor do aumento e o novo salario.
// Criado por Luan Eduardo.
// Perfil GitHub: https://github.com/LuanEduardo47

#include "stdafx.h"
#include <iostream>
#include <cstdint>

// Prototipo de funcoes.
void getSalarioPercentual();
void calcSalario(double salario, double percentual);
void printSalario(double salario_final, double aumento);
void limpaBuffer();

/* Funcao principal.
*/
int main()
{
    getSalarioPercentual();
    std::cin.get();
    return 0;
}

/* Obtem o salario e o percentual de aumento do usuario e envia
 * como argumento para calcSalario().
*/
void getSalarioPercentual()
{
    std::cout << "Insira seu salario > ";
    double salario{};
    std::cin >> salario;
    limpaBuffer();

    std::cout << "\nInsira o percentual de aumento > ";
    std::int32_t percentual{};
    std::cin >> percentual;
    limpaBuffer();

    calcSalario(salario, percentual);
}

/* Calcula o salario com o percentual recebido e envia
 * o resultado para printSalario().
*/
void calcSalario(double salario, double percentual)
{
    // Converte a porcentagem para decimal.
    percentual /= 100;
    double aumento = salario * percentual;

    printSalario(salario + aumento, aumento);
}

/* Exibe o valor de aumento e o salario final na tela.
*/
void printSalario(double salario_final, double aumento)
{
    std::cout << "\nValor do aumento: " << aumento;
    std::cout << "\nSalario Final: " << salario_final;
}

/* Limpa erros e caracteres no buffer de entrada.
*/
void limpaBuffer()
{
    std::cin.clear();
    std::cin.ignore();
}
