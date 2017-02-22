// Este programa obtem um numero com 1 digito do usuario, verifica e exibe se e primo.
// Criado por Luan Eduardo.
// Perfil GitHub: https://github.com/LuanEduardo47

#include "stdafx.h"
#include <iostream>
#include <cstdint>

std::int16_t getUserDigit();
void isPrime(std::int16_t prime);

/* Funcao principal: chama as outras funcoes.
*/
int main()
{
	std::int16_t number{ getUserDigit() };
	isPrime(number);

	// Espera por um Enter do usuario.
	std::cin.get();

    return 0;
}

/* Pede um numero com apenas 1 digito ao usuario.
*/
std::int16_t getUserDigit()
{
	std::cout << "Insira um numero com 1 digito > ";
	std::int16_t number;
	std::cin >> number;

	// Limpa erros e caracteres do buffer de entrada.
	std::cin.clear();
	std::cin.ignore();

	return number;
}

/* Verifique se o numero recebido e primo.
*/
void isPrime(std::int16_t prime)
{
	// Qualquer entrada diferente de 2, 3, 5 e 7 sera rejeitada.
	if ((prime == 2) || (prime == 3) || (prime == 5) || (prime == 7))
	{
		std::cout << prime << " is a prime number!\n";
	}
	else
	{
		std::cout << prime << " is not a prime number.\n";
	}
}