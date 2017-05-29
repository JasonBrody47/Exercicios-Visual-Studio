// Copyright (C) 2017 Luan Eduardo.
//
// Este arquivo é parte do programa LearnCpp2.10_Question3.

#pragma once
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

double getDoubleNumber();

void clearInputBuffer();

char getValidOperator();

bool isValidOperator(char check_operator);

double calculateDoubleOperation(const double calc_number_1,
    const char calc_operator, const double calc_number_2);

void printCalculatedResult(const double print_number_1, const char print_operator,
    const double print_number_2, const double print_result);

#endif // !FUNCTIONS_H

