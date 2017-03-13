/*
 * Esse programa recebe o raio de um circulo, calcula e mostra sua area.
 * @autor Luan Eduardo.
 * Perfil GitHub: https://github.com/LuanEduardo47
*/

#include "stdafx.h"
#include <iostream>

void getCircleRadius();
void calculateCircleArea(double radius);
void printCircleArea(double print_area);

// Funcao Principal
int main()
{
    getCircleRadius();
    std::cin.get();
    return 0;
}

// Essa funcao obtem o valor do raio do usuario e chama a funcao
// para calcular esse raio.
void getCircleRadius()
{
    std::cout << "Insira o raio do circulo > ";
    double circle_radius;
    std::cin >> circle_radius;

    std::cin.clear();
    std::cin.ignore();

    calculateCircleArea(circle_radius);
}

// Essa funcao calcula a area recebida como parametro.
void calculateCircleArea(double radius)
{
    double circle_area = 3.14 * (radius * radius);
    printCircleArea(circle_area);
}

// Essa funcao exibe a area do circulo na tela.
void printCircleArea(double print_area)
{
    std::cout << "\nArea do circulo: " << print_area;
}