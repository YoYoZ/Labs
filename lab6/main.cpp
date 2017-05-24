//
//  main.cpp
//  lab5
//
//  Created by Anton Solyarik on 14.05.17.
//  Copyright © 2017 Anton Solyarik. All rights reserved.
//

#include <iostream>
#include <deque>

using namespace std;

int main(int argc, const char * argv[]) {
    cout<<"enter selection: 1 - int, 2 - float, 3 - double"<<endl;
    int sel;
    cin>>sel;
    switch (sel)
    {
        case 1: {
            deque<int> d;
            for (int i = 1; i <= 10; ++i) {
                d.push_front(i);
                cout<<"Now putting "<<i<<endl;
                
            }
        }
            break;
        case 2: {
            deque<float> e;
            for (float i = 1; i <= 10; i=i+1.25) {
                e.push_front(i);
                cout<<"Now putting "<<i<<endl;
                
            }
        }
            break;
        case 3: {
            deque<double> z;
            for (double i = 1; i <= 10; i=i+1.25) {
                z.push_front(i);
                cout<<"Now putting "<<i<<endl;
                
            }
        }
            break;
    }
    
    
    return 0;
}
