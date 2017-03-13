// Esse programa recebe a base e altura de um triangulo, calcula e mostra o resultado da area.
// Criado por Luan Eduardo.
// Perfil GitHub: https://github.com/LuanEduardo47

#include "stdafx.h"
#include <iostream>

// Prototipo de funcoes.
void getMedidas();
void calcArea(double base, double altura);
void printArea(double area);
void limpaBuffer();

/* Funcao principal.
*/
int main()
{
    getMedidas();
    std::cin.get();
    return 0;
}

/* Essa funcao obtem a base e altura do triangulo do usuario
 * e chama outra funcao para calcular a area.
*/
void getMedidas()
{
    std::cout << "Insira a base do triangulo > ";
    double base;
    std::cin >> base;
    limpaBuffer();

    std::cout << "\nInsira a altura do triangulo > ";
    double altura;
    std::cin >> altura;
    limpaBuffer();

    calcArea(base, altura);
}

/* Essa funcao calcula a area pelos parametros base e altura recebidos.
*/
void calcArea(double base, double altura)
{
    double area = (base * altura) / 2;
    printArea(area);
}

/* Essa funcao exibe o resultado da area na tela.
*/
void printArea(double area)
{
    std::cout << "\nArea do triangulo: " << area;
}

/* Limpa erros e caracteres no buffer de entrada.
*/
void limpaBuffer()
{
    std::cin.clear();
    std::cin.ignore();
}