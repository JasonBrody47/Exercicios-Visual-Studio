#pragma once
#ifndef DYNAMIC_ARRAY_NAMES_H
#define DYNAMIC_ARRAY_NAMES_H

namespace names_limit
{
    const int16_t min{ 1 };
    const int16_t max{ 30 };
}

int16_t getNumberOfNames();
bool isValidInput(int16_t input);
std::string* getNames(int16_t length);
std::string* sortNames(std::string *names, int16_t length);
void printSortedNames(std::string *names, int16_t length);

#endif // !DYNAMIC_ARRAY_NAMES_H
