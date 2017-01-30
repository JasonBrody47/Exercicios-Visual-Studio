// Esse programa recebe o salario de um funcionario e o percentual de aumento, calcula e mostra
// o valor do aumento e o novo salario.
// Criado por Luan Eduardo.
// Perfil GitHub: https://github.com/JasonBrody47

#include "stdafx.h"
#include <iostream>

// Prototipo de funcoes.
void getSalarioPercentual();
void calcSalario(float salario, float percentual);
void printSalario(float salario_final, float aumento);
void limpaBuffer();

/* Funcao principal.
*/
int main()
{
	getSalarioPercentual();
	std::cin.get();
    return 0;
}

/* Obtem o salario e o percentual de aumento do usuario e envia
 * como argumento para calcSalario().
*/
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

/* Calcula o salario com o percentual recebido e envia 
 * o resultado para printSalario().
*/
void calcSalario(float salario, float percentual)
{
	// Converte a porcentagem para decimal.
	percentual /= 100;
	float aumento = salario * percentual;

	printSalario(salario + aumento, aumento);
}

/* Exibe o valor de aumento e o salario final na tela.
*/
void printSalario(float salario_final, float aumento)
{
	std::cout << "\nValor do aumento: " << aumento;
	std::cout << "\nSalario Final: " << salario_final;
}

/* Limpa erros e caracteres no buffer de entrada.
*/
void limpaBuffer()
{
	std::cin.clear();
	std::cin.ignore();
}
