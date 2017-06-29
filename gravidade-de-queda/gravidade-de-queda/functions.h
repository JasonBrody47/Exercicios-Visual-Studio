// LearnCpp2.10_Question4.

#pragma once
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

// Typedef para Double.
using height_t = double;

// Funções

double getInitialHeight();
void calculateHeightFall(height_t height);
void printHeightAndSeconds(height_t height, size_t seconds);

#endif // !FUNCTIONS_H
