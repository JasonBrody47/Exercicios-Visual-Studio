// Copyright (C) 2017 Luan Eduardo.
//
// Este arquivo é parte do programa LearnCpp2.10_Question4.

#pragma once
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

using height_t = double;


double getInitialTowerHeight();

void calculateBallHeight(height_t current_height);

void printBallHeightAndSeconds(height_t print_height, size_t print_seconds);

#endif // !FUNCTIONS_H
