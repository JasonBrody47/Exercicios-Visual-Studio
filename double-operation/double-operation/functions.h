// LearnCpp2.10_Question3.

#pragma once
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

// Typedefs.

using cdouble_t = const double;
using coperator_t = const char;
using operator_t = char;

// Funções.

double getDoubleNumber();
operator_t getOperator();
bool isValidOperator(operator_t check_op);
double calculateOperation(cdouble_t num_1, coperator_t calc_op, cdouble_t num_2);
void printResult(cdouble_t num_1, coperator_t op, cdouble_t num_2, cdouble_t result);

#endif // !FUNCTIONS_H

