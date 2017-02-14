// Esse programa recebe o raio de um circulo, calcula e mostra sua area.
// Criado por Luan Eduardo.
// Perfil GitHub: https://github.com/LuanEduardo47

#include "stdafx.h"
#include <iostream>

// Prototipo de funcoes.
void getRaio();
void calcArea(double raio);
void printArea(double area);

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
	std::cout << "Insira o raio do circulo > ";
	double raio;
	std::cin >> raio;

	std::cin.clear();
	std::cin.ignore();

	calcArea(raio);
}

/* Essa funcao calcula a area recebida como parametro.
*/
void calcArea(double raio)
{
	double area = 3.14 * (raio * raio);
	printArea(area);
}

/* Essa funcao exibe a area do circulo na tela.
*/
void printArea(double area)
{
	std::cout << "\nArea do circulo: " << area;
}