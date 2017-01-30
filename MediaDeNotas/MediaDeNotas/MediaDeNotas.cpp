// Este programa obtem 3 notas do usuario, calcula a media e exibe a media na tela.
// Criado por Luan Eduardo.
// Perfil GitHub: https://github.com/JasonBrody47

#include "stdafx.h"
#include <iostream>

void obterNota();
void calculeNota(float n1, float n2, float n3);
void mostrarMedia(float media);

/* Função Principal.
*/
int main()
{
	obterNota();
	std::cin.get();
    return 0;
}

/* Essa funcao obtem tres notas do usuario,
 * armazena nas variaveis e usa os valores
 * como argumento para chamada de funcao.
*/
void obterNota()
{
	float nota_1, nota_2, nota_3;

	std::cout << "Insira a primeira nota > ";
	std::cin >> nota_1;
	std::cin.clear();
	std::cin.ignore();

	std::cout << "\nInsira a segunda nota > ";
	std::cin >> nota_2;
	std::cin.clear();
	std::cin.ignore();

	std::cout << "\nInsira a terceira nota > ";
	std::cin >> nota_3;
	std::cin.clear();
	std::cin.ignore();

	calculeNota(nota_1, nota_2, nota_3);
}

/* Essa funcao recebe os argumentos passados,
 * faz o calculo da media e chama outra funcao
 * com o resultado como argumento.
*/
void calculeNota(float n1, float n2, float n3)
{
	mostrarMedia((n1 + n2 + n3) / 3);
}

void mostrarMedia(float media)
{
	std::cout << "\nMedia das notas: " << media;
}
