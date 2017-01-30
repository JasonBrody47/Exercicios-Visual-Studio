// Este programa le, calcula e exibe a soma de 4 numeros.
// Criado por Luan Eduardo.
// Perfil GitHub: https://github.com/JasonBrody47

#include "stdafx.h"
#include <iostream>

// Prototipos das funcoes.
void lerNumeros();
void somarNumeros(int n1, int n2, int n3, int n4);
void exibirSoma(int soma);
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
	int num_1, num_2, num_3, num_4;

	std::cout << "Insira o primeiro numero > ";
	std::cin >> num_1;
	limparBuffer();

	std::cout << "Insira o segundo numero > ";
	std::cin >> num_2;
	limparBuffer();

	std::cout << "Insira o terceiro numero > ";
	std::cin >> num_3;
	limparBuffer();

	std::cout << "Insira o quarto numero > ";
	std::cin >> num_4;
	limparBuffer();

	somarNumeros(num_1, num_2, num_3, num_4);
}

/* Essa funcao recebe os valores de argumentos,
 * soma esses valores e envia o resultado como argumento
 * para outra chamada de funcao.
*/
void somarNumeros(int n1, int n2, int n3, int n4)
{
	exibirSoma(n1 + n2 + n3 + n4);
}

/* Essa funcao recebe a soma pelo argumento passado
 * e exibe o resultado na tela. 
*/
void exibirSoma(int soma)
{
	std::cout << "Resultado da soma: " << soma;
}

/* Limpa erros e caracteres no buffer de imput.
*/
void limparBuffer()
{
	std::cin.clear();
	std::cin.ignore();
}
