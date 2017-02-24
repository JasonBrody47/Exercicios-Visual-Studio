#include "stdafx.h"
#include <iostream>
#include "Functions.h"


/* Obtem do usuario um valor Double e o retorna ao chamador.
*/
double getUserDoubleNumber()
{
	std::cout << "Insira um numero com decimais > ";
	double number{};
	// Nao ha nenhuma validacao da entrada do usuario,
	// o programa pode quebrar com um valor invalido.
	// Obs: Isso sera corrigido com tempo.
	std::cin >> number;
	limparBuffer();

	return number;
}

/* Obtem um operador matematico do usuario com um Char,
* O valor e retornado ao chamador.
*/
char getUserOperator()
{
	std::cout << "Insira um operador matematico (+, -, * ou /) sem espacos > ";
	char user_operator{};
	std::cin >> user_operator;
	limparBuffer();

	// Verifica se o char inserido e valido;
	// Se sim, retorna TRUE
	// Se nao, retorna FALSE.
	if (checkOperator(user_operator))
	{
		// TRUE -> retorna o char para o chamador.
		return user_operator;
	}
	else
	{
		// FALSE -> faz uma chamada recursiva ate que o operador seja valido.
		getUserOperator();
	}
}

/* Verifica se o operador inserido e valido.
*/
bool checkOperator(char check_operator)
{
	if ((check_operator == '+') || (check_operator == '-') || (check_operator == '*') || (check_operator == '/'))
	{
		return true;
	}
	// Qualquer caracter diferente de +, -, * e / e invalido.
	std::cout << "\nOperador invalido!\n";
	return false;
}

/* Faz o calculo dos Double's conforme o operador informado;
* O resultado e retornado ao chamador.
*/
double calculateDoubleOperation(double calc_number_1, char calc_operator, double calc_number_2)
{
	// Armazane o resultado do calculo.
	double calc_result{};

	if (calc_operator == '+')
	{
		calc_result = calc_number_1 + calc_number_2;
		return calc_result;
	}
	else if (calc_operator == '-')
	{
		calc_result = calc_number_1 - calc_number_2;
		return calc_result;
	}
	else if (calc_operator == '*')
	{
		calc_result = calc_number_1 * calc_number_2;
		return calc_result;
	}
	else if (calc_operator == '/')
	{
		calc_result = calc_number_1 / calc_number_2;
		return calc_result;
	}
	else
	{
		std::cout << "Algo de errado esta acontecendo no operador...\n";
	}
}

/* Imprime o resultado do calculo na tela com os operandos e o operador.
*/
void printCalculatedResult(double print_number_1, char print_operator, double print_number_2, double print_result)
{
	std::cout << "\n" << "Operacao: " << print_number_1 << " " << print_operator << " " << print_number_2 << " = " << print_result << "\n";
}

/* Limpa erros e caracteres no buffer de entrada.
*/
void limparBuffer()
{
	std::cin.clear();
	std::cin.ignore();
}
