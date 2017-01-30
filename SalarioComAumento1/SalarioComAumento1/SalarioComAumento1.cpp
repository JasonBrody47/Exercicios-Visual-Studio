// Esse programa recebe o salario de um funcionario, calcula e mostra o novo salario,
// com 25% de aumento.
// Criado por Luan Eduardo.
// Perfil GitHub: https://github.com/JasonBrody47

#include "stdafx.h"
#include <iostream>

void getSalario();
void calcSalario(float salario);
void printSalario(float salario_final);

int main()
{
	getSalario();
	std::cin.get();
    return 0;
}

void getSalario()
{
	float salario(0);

	std::cout << "Insira seu salario > ";
	std::cin >> salario;
	std::cin.clear();
	std::cin.ignore();

	calcSalario(salario);
}

void calcSalario(float salario)
{
	float aumento = salario * 0.25;
	salario += aumento;

	printSalario(salario);
}

void printSalario(float salario_final)
{
	std::cout << "\nSalario final (com aumento): " << salario_final;
}
