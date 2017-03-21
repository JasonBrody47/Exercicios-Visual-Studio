// Copyright (C) 2017 Luan Eduardo.
//
// Este arquivo é parte do programa LearnCpp2.10_Question4.

#include "stdafx.h"
#include <iostream>
#include "Functions.h"

int main()
{
    const double initial_height{ getInitialTowerHeight() };
    calculateBallHeight(initial_height);

    std::cin.get();

    return 0;
}