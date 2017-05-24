//
//  main.cpp
//  lab7
//
//  Created by Anton Solyarik on 15.05.17.
//  Copyright © 2017 Anton Solyarik. All rights reserved.
//

#include <iostream>
#include "realMultiplication.hpp"
#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    realMultiplication r;
    cout<<"Enter two double values to multiply; Beware -- overflowing will cast exception and show message"<<endl;
    double d1, d2;
    cin>>d1;
    cin>>d2;
    try
    {
        double temp = r.multiply(d1, d2);
        cout<<"Successfull operation, here is your value "<<temp<<endl;
    }
    catch (std::string c)
    {
        cout << c;
    }
    return 0;
}
