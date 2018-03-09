// LearnCpp4.4b_Question1.

#pragma once
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

// Typedefs.

using name_t = std::string;
using age_t = std::int16_t;

// Fun��es.

name_t getUserName();
age_t getUserAge();
double calculateAgeForEachLetter(name_t name, age_t age);
void printCalculatedAge(double life_time);

#endif // !FUNCTIONS_H

