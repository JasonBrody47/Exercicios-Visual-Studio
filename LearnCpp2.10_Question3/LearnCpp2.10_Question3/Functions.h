#pragma once
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

/* Limpa erros e caracteres no buffer de entrada.
*/
void limparBuffer();

/* Obtem do usuario um valor Double e o retorna ao chamador.
*/
double getUserDoubleNumber();

/* Verifica se o operador inserido e valido.
*/
bool checkOperator(char check_operator);

/* Obtem um operador matematico do usuario com um Char,
* O valor e retornado ao chamador.
*/
char getUserOperator();

/* Faz o calculo dos Double's conforme o operador informado;
* O resultado e retornado ao chamador.
*/
double calculateDoubleOperation(double calc_number_1, char calc_operator, double calc_number_2);

/* Imprime o resultado do calculo na tela com os operandos e o operador.
*/
void printCalculatedResult(double print_number_1, char print_operator, double print_number_2, double print_result);

#endif // !FUNCTIONS_H

