// Esse programa recebe o salario base de um funcionario, calcula e mostra o salario
// a receber, sabendo que tem 5% de gratificacao sobre o salario base e paga imposto
// de 7% sobre este salario.
// Criado por Luan Eduardo.
// Perfil GitHub: https://github.com/JasonBrody47

#include "stdafx.h"
#include <iostream>

// Prototipo das funcoes.
void getSalario();
void calcSalario(float salario);
void printSalario(float salario_base, float salario_gratificacao, float salario);

/* Funcao principal.
*/
int main()
{
	getSalario();
	std::cin.get();
    return 0;
}

/* Recebe o salario base do usuario e envia o argumento para calcSalario().
*/
void getSalario()
{
	float salario_base(0);
	std::cout << "Insira seu salario base > ";
	std::cin >> salario_base;
	std::cin.clear();
	std::cin.ignore();

	calcSalario(salario_base);
}

/* Calcula o salario com gratificacao e com imposto.
*/
void calcSalario(float salario)
{
	// Quarda o valor base.
	float salario_base = salario;

	// Soma o salario a gratificacao.
	salario += (salario * 0.05);
	float salario_gratificacao = salario;

	// Subtrai o salario com o imposto resultante.
	salario -= (salario * 0.07);

	printSalario(salario_base, salario_gratificacao, salario);
}

/* Exibe o salario base, com gratificacao e com impostos na tela.
*/
void printSalario(float salario_base, float salario_gratificacao, float salario)
{
	std::cout << "Salario base: " << salario_base;
	std::cout << "\nSalario base com gratificacao: " << salario_gratificacao;
	std::cout << "\nSalario final com imposto: " << salario;
}