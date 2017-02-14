// Este programa le, calcula e exibe a soma de 4 numeros.
// Criado por Luan Eduardo.
// Perfil GitHub: https://github.com/LuanEduardo47

#include "stdafx.h"
#include <iostream>
#include <cstdint>

// Prototipos das funcoes.
void lerNumeros();
void somarNumeros(std::int32_t n1, std::int32_t n2, std::int32_t n3, std::int32_t n4);
void exibirSoma(std::int32_t soma);
void limparBuffer();

/* Funcao principal.
*/
int main()
{
	lerNumeros();
	std::cin.get();
    return 0;
}

/* Essa funcao le as entradas do usuario,
 * armazena nas variaveis declaradas,
 * e usa as variaveis como argumentos para a chamada de outra funcao.
*/
void lerNumeros()
{
	std::cout << "Insira o primeiro numero > ";
	std::int32_t num_1{};
	std::cin >> num_1;
	limparBuffer();

	std::cout << "Insira o segundo numero > ";
	std::int32_t num_2{};
	std::cin >> num_2;
	limparBuffer();

	std::cout << "Insira o terceiro numero > ";
	std::int32_t num_3{};
	std::cin >> num_3;
	limparBuffer();

	std::cout << "Insira o quarto numero > ";
	std::int32_t num_4{};
	std::cin >> num_4;
	limparBuffer();

	somarNumeros(num_1, num_2, num_3, num_4);
}

/* Essa funcao recebe os valores de argumentos,
 * soma esses valores e envia o resultado como argumento
 * para outra chamada de funcao.
*/
void somarNumeros(std::int32_t n1, std::int32_t n2, std::int32_t n3, std::int32_t n4)
{
	exibirSoma(n1 + n2 + n3 + n4);
}

/* Essa funcao recebe a soma pelo argumento passado
 * e exibe o resultado na tela. 
*/
void exibirSoma(std::int32_t soma)
{
	std::cout << "Resultado da soma: " << soma;
}

/* Limpa erros e caracteres no buffer de entrada.
*/
void limparBuffer()
{
	std::cin.clear();
	std::cin.ignore();
}
