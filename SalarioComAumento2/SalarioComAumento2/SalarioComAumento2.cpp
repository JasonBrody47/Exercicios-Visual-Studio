// Esse programa recebe o salario de um funcionario e o percentual de aumento, calcula e mostra
// o valor do aumento e o novo salario.
// Criado por Luan Eduardo.
// Perfil GitHub: https://github.com/JasonBrody47

#include "stdafx.h"
#include <iostream>

void getSalarioPercentual();
void calcSalario(float salario, float percentual);
void printSalario(float salario_final, float aumento);
void limpaBuffer();

int main()
{
	getSalarioPercentual();
	std::cin.get();
    return 0;
}

void getSalarioPercentual()
{
	float salario(0);
	int percentual(0);

	std::cout << "Insira seu salario > ";
	std::cin >> salario;
	limpaBuffer();

	std::cout << "\nInsira o percentual de aumento > ";
	std::cin >> percentual;
	limpaBuffer();

	calcSalario(salario, percentual);
}

void calcSalario(float salario, float percentual)
{
	// Converte a porcentagem para decimal.
	percentual /= 100;
	float aumento = salario * percentual;

	printSalario(salario + aumento, aumento);
}

void printSalario(float salario_final, float aumento)
{
	std::cout << "\nValor do aumento: " << aumento;
	std::cout << "\nSalario Final: " << salario_final;
}

void limpaBuffer()
{
	std::cin.clear();
	std::cin.ignore();
}
