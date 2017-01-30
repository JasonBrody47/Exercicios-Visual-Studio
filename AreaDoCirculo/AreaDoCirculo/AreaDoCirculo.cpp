// Esse programa recebe o raio de um circulo, calcula e mostra sua area.
// Criado por Luan Eduardo.
// Perfil GitHub: https://github.com/JasonBrody47

#include "stdafx.h"
#include <iostream>

// Prototipo de funcoes.
void getRaio();
void calcArea(float raio);
void printArea(float area);

/* Funcao principal.
*/
int main()
{
	getRaio();
	std::cin.get();
    return 0;
}

/* Essa funcao obtem o valor do raio do usuario e chama a funcao
 * para calcular esse raio.
*/
void getRaio()
{
	float raio;

	std::cout << "Insira o raio do circulo > ";
	std::cin >> raio;
	std::cin.clear();
	std::cin.ignore();

	calcArea(raio);
}

/* Essa funcao calcula a area recebida como parametro.
*/
void calcArea(float raio)
{
	float area = 3.14 * (raio * raio);
	printArea(area);
}

/* Essa funcao exibe a area do circulo na tela.
*/
void printArea(float area)
{
	std::cout << "\nArea do circulo: " << area;
}