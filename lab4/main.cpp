//
//  main.cpp
//  lab4
//
//  Created by Anton Solyarik on 11.04.17.
//  Copyright © 2017 Anton Solyarik. All rights reserved.
//

#include <iostream>
#include "weirdnumbers.hpp"

std::ostream& operator <<(std::ostream& os, char value) {
    return os << (value ? "True" : "False");
}
std::ostream& operator <<(std::ostream& os,  weirdNumbers& num) {
    return os <<"**********************"<<std::endl<< "x: " << num.x << " e1: " << num.e1 << " e2: " << num.e2 << std::endl << "X=("<<num.x-num.e1<<","<<num.x<<","<<num.x+num.e2<<")"<<std::endl<<"IS IT LOWER THAN 0?: "<<num.isLowerthanzero()<<std::endl;
}

weirdNumbers operator+(weirdNumbers& left, weirdNumbers& right)
{
    weirdNumbers result;
    result.x = left.x+right.x;
    result.e1 = (left.e1)+(right.e1);
    result.e2 = (left.e2)+(right.e2);
    return result;
}
weirdNumbers operator -(weirdNumbers& left, weirdNumbers& right)
{
    weirdNumbers result;
    result.x = left.x-right.x;
    result.e1 = (left.e1)+(right.e1);
    result.e2 = (left.e2)+(right.e2);
    return result;
}
weirdNumbers operator *(weirdNumbers& left, weirdNumbers& right)
{
    weirdNumbers result;
    result.x = left.x*right.x;
    result.e1 = (left.e1 * right.x)-(right.e1 * left.x) + (left.e1 * right.e1);
    result.e2 = (left.e1 * right.x)+(right.e1 * left.x) + (left.e1 * right.e1);
    return result;
}

int main(int argc, const char * argv[])
{
    weirdNumbers w1(5.2,1.666,2.13);
    weirdNumbers w2(6.34,3.56,4.88);
    weirdNumbers w3 = w1 + w2;
    std::cout << w3;
    w3 = w1 - w2;
    std::cout<<w3;
    w3 = w1*w2;
    std::cout<<w3;
    return 0;
}


