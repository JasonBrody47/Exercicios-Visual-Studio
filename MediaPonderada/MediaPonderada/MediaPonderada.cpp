// Este programa recebe 3 notas e seus pesos, calcula e mostra a media ponderada.
// Criado por Luan Eduardo.
// Perfil GitHub: https://github.com/JasonBrody47

#include "stdafx.h"
#include <iostream>

void getNotas();
void calcMedia(float n1, float n2, float n3, float p1, float p2, float p3);
void printMedia(float media);
void limpaBuffer();

int main()
{
	getNotas();
	std::cin.get();
    return 0;
}

void getNotas()
{
	float nota_1, nota_2, nota_3;
	float peso_n1, peso_n2, peso_n3;

	std::cout << "Nota 1 > ";
	std::cin >> nota_1;
	limpaBuffer();
	std::cout << "\nPeso da Nota 1 > ";
	std::cin >> peso_n1;
	limpaBuffer();

	std::cout << "Nota 2 > ";
	std::cin >> nota_2;
	limpaBuffer();
	std::cout << "\nPeso da Nota 2 > ";
	std::cin >> peso_n2;
	limpaBuffer();

	std::cout << "Nota 3 > ";
	std::cin >> nota_3;
	limpaBuffer();
	std::cout << "\nPeso da Nota 3 > ";
	std::cin >> peso_n3;
	limpaBuffer();

	calcMedia(nota_1, nota_2, nota_3, peso_n1, peso_n2, peso_n3);
}

void calcMedia(float n1, float n2, float n3, float p1, float p2, float p3)
{
	float media = ((n1 * p1) + (n2 * p2) + (n3 * p3)) / 3;
	printMedia(media);
}

void printMedia(float media)
{
	std::cout << "\nMedia Ponderada: " << media << "\n";
}

void limpaBuffer()
{
	std::cin.clear();
	std::cin.ignore();
}
