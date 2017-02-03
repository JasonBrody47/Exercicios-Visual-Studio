// Esse programa recebe o salario base de um funcionario, calcula e mostra o seu
// salario a receber, sabendo que o funcionario tem gratificacao de R$ 50 e paga
// imposto de 10% sobre o salario base.
// Criado por Luan Eduardo.
// Perfil GitHub: https://github.com/JasonBrody47

#include "stdafx.h"
#include <iostream>

// Prototipos de funcoes.
void getSalario();
void calcSalario(float salario);
void printSalario(float salario_base, float salario_imposto, float salario);

/* Funcao principal.
*/
int main()
{
	getSalario();
	std::cin.get();
    return 0;
}

/* Recebe o salario base do usuario e envia como argumento
 * para calcSalario().
*/
void getSalario()
{
	std::cout << "Insira seu salario base > ";
	float salario_base{};
	std::cin >> salario_base;
	std::cin.clear();
	std::cin.ignore();

	calcSalario(salario_base);
}

/* Calcula o salario base com a gratificacao e o imposto e envia
 * como argumento os valores para printSalario().
*/
void calcSalario(float salario)
{
	// Quarda o valor base
	float salario_base{ salario };

	// Subtrai o salario com o imposto resultante
	salario -= (salario * 0.10);
	float salario_imposto{ salario };

	// Soma o salario a gratificacao
	salario += 50;

	printSalario(salario_base, salario_imposto, salario);
}

/* Exibe o salario base, base com imposto e salario final com gratificacao na tela.
*/
void printSalario(float salario_base, float salario_imposto, float salario)
{
	std::cout << "Salario base: " << salario_base;
	std::cout << "\nSalario base com imposto: " << salario_imposto;
	std::cout << "\nSalario final com gratificacao: " << salario;
}
