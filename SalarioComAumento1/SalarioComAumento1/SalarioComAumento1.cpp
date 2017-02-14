// Esse programa recebe o salario de um funcionario, calcula e mostra o novo salario,
// com 25% de aumento.
// Criado por Luan Eduardo.
// Perfil GitHub: https://github.com/LuanEduardo47

#include "stdafx.h"
#include <iostream>

// Prototipo de funcoes.
void getSalario();
void calcSalario(double salario);
void printSalario(double salario_final);

/* Funcao principal.
*/
int main()
{
	getSalario();
	std::cin.get();
    return 0;
}

/* Obtem a entrada do usuario e envia o numero inteiro como
 * argumento para calcSalario().
*/
void getSalario()
{
	std::cout << "Insira seu salario > ";
	double salario{};
	std::cin >> salario;

	std::cin.clear();
	std::cin.ignore();

	calcSalario(salario);
}

/* Calcula o parametro salario recebido com seu aumento de 25%.
*/
void calcSalario(double salario)
{
	// 0.25 => 25%
	double aumento = salario * 0.25;
	salario += aumento;

	printSalario(salario);
}

/* Exibe o salario com aumento na tela.
*/
void printSalario(double salario_final)
{
	std::cout << "\nSalario final (com aumento): " << salario_final;
}
