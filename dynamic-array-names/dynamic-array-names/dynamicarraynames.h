#pragma once
#ifndef DYNAMIC_ARRAY_NAMES_H
#define DYNAMIC_ARRAY_NAMES_H

int32_t getNumberOfNames();
bool isValidInput();
std::string* getNames(int32_t length);
std::string* sortNames(std::string *names, int32_t length);
void printSortedNames(std::string *names, int32_t length);

#endif // !DYNAMIC_ARRAY_NAMES_H
