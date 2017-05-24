//
//  main.cpp
//  lab5
//
//  Created by Anton Solyarik on 14.05.17.
//  Copyright © 2017 Anton Solyarik. All rights reserved.
//

#include <iostream>
#include "Deka.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    cout<<"enter selection: 1 - int, 2 - float, 3 - double"<<endl;
    int sel;
    cin>>sel;
    switch (sel)
    {
        case 1: {
            deka<int> d;
            int *pointer;
            for (int i = 1; i <= 10; ++i) {
                pointer = new int(i);
                d.push(pointer);
                cout<<"Now entering into base "<<i<<endl;
            }
            d.removeFromTop();
            d.removeFromBottom();
            cout<<"Removing 1 and last element"<<endl;
            d.output();
        }
            break;
        case 2: {
            deka<float> e;
            float *pointerF;
            for (float i = 1; i <= 10; i=i+1.25) {
                pointerF = new float(i);
                e.push(pointerF);
                cout<<"Now entering into base "<<i<<endl;
            }
            e.removeFromTop();
            e.removeFromBottom();
            cout<<"Removing 1 and last element"<<endl;
            e.output();
        
        }
            break;
        case 3: {
            deka<double> z;
            double *pointerD;
            for (double i = 1; i <= 10; i=i+1.25) {
                pointerD = new double(i);
                z.push(pointerD);
                cout<<"Now entering into base "<<i<<endl;
            }
            z.removeFromTop();
            z.removeFromBottom();
            cout<<"Removing 1 and last element"<<endl;
            z.output();
        
        }
            break;
    }
    
       
    return 0;
}
