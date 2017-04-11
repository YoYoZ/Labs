//
//  weirdNumbers.hpp
//  lab4
//
//  Created by Anton Solyarik on 11.04.17.
//  Copyright © 2017 Anton Solyarik. All rights reserved.
//

#ifndef weirdNumbers_hpp
#define weirdNumbers_hpp

using namespace std;
#include <ostream>

#include <stdio.h>
class weirdNumbers
{
public:
    weirdNumbers(double x, double e1, double e2)
    {
        this->x = x;
        this->e1 = e1;
        this->e2 = e2;
    }
    weirdNumbers()
    {
        
    }
    ~weirdNumbers()
    {
        
    }
    const bool isLowerthanzero();
    friend weirdNumbers operator-(weirdNumbers& left, weirdNumbers& right);
    friend weirdNumbers operator*(weirdNumbers& left, weirdNumbers& right);
    friend ostream& operator <<(std::ostream& os,  weirdNumbers& num);
    friend weirdNumbers operator+(weirdNumbers& left, weirdNumbers& right);
private:
    double x;
    double e1;
    double e2;
    
};
#endif /* weirdNumbers_hpp */
