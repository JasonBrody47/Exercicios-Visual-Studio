// Esse programa recebe a base e altura de um triangulo, calcula e mostra o resultado da area.
// Criado por Luan Eduardo.
// Perfil GitHub: https://github.com/JasonBrody47

#include "stdafx.h"
#include <iostream>

// Prototipo de funcoes.
void getMedidas();
void calcArea(float base, float altura);
void printArea(float area);
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
	float base;
	std::cin >> base;
	limpaBuffer();

	std::cout << "\nInsira a altura do triangulo > ";
	float altura;
	std::cin >> altura;
	limpaBuffer();

	calcArea(base, altura);
}

/* Essa funcao calcula a area pelos parametros base e altura recebidos.
*/
void calcArea(float base, float altura)
{
	float area = (base * altura) / 2;
	printArea(area);
}

/* Essa funcao exibe o resultado da area na tela.
*/
void printArea(float area)
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