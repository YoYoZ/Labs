L//
//  realMultiplication.cpp
//  lab7
//
//  Created by Anton Solyarik on 15.05.17.
//  Copyright © 2017 Anton Solyarik. All rights reserved.
//

#include "realMultiplication.hpp"
#include <cmath>
#include <string>
#include <iostream>

double realMultiplication::multiply(double d1, double d2)
{
    double mult = 0;
    mult = d1 * d2;
    if (isinf(mult))
        throw std::string("Alert! Overflow! Catched by in-class system\n");
    return mult;
}
