// #pragma once
#ifndef INCLUDED_IO_H
#define INCLUDED_IO_H

#include <cstdint>

/* Le a entrada do usuario e retorna o numero inteiro ao chamador.
*/
std::int32_t readNumber();

/* Exibe a soma dos numeros na tela.
*/
void writeAnswer(std::int32_t result);

#endif // !INCLUDED_IO_H