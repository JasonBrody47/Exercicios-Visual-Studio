// Esse programa recebe o salario base de um funcionario, calcula e mostra o seu
// salario a receber, sabendo que o funcionario tem gratificacao de R$ 50 e paga
// imposto de 10% sobre o salario base.
// Criado por Luan Eduardo.
// Perfil GitHub: https://github.com/JasonBrody47

#include "stdafx.h"
#include <iostream>

void getSalario();
void calcSalario(float salario);
void printSalario(float salario_base, float salario_imposto, float salario);

int main()
{
	getSalario();
	std::cin.get();
    return 0;
}

void getSalario()
{
	float salario_base(0);
	std::cout << "Insira seu salario base > ";
	std::cin >> salario_base;
	std::cin.clear();
	std::cin.ignore();

	calcSalario(salario_base);
}

void calcSalario(float salario)
{
	// Quarda o valor base
	float salario_base = salario;

	// Subtrai o salario com o imposto resultante
	salario -= (salario * 0.10);
	float salario_imposto = salario;

	// Soma o salario a gratificacao
	salario += 50;

	printSalario(salario_base, salario_imposto, salario);
}

void printSalario(float salario_base, float salario_imposto, float salario)
{
	std::cout << "Salario base: " << salario_base;
	std::cout << "\nSalario base com imposto: " << salario_imposto;
	std::cout << "\nSalario final com gratificacao: " << salario;
}
