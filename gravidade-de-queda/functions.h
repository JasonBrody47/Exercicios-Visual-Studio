// LearnCpp2.10_Question4.

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

// Typedef para Double.
using height_t = double;

// Funções

double getInitialHeight();
bool isValidInput(height_t input);
void calculateHeightFall(height_t height);
void printHeightAndSeconds(height_t height, size_t seconds);

#endif // !FUNCTIONS_H
