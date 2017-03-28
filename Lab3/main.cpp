//
//  main.cpp
//  Lab3
//
//  Created by Anton Solyarik on 28.03.17.
//  Copyright © 2017 Anton Solyarik. All rights reserved.
//

#include <iostream>
#include "SSD.hpp"
#include "HDD.hpp"

using namespace std;
int main(int argc, const char * argv[]) {
    int deviceNumber;
    bool selection;
    cout<<"Enter device count"<<endl;
    cin>>deviceNumber;
    for(int i = 0; i<deviceNumber; i++)
    {
        cout<<"Enter 0 for SSD, 1 for HDD"<<endl;
        if(!selection)
           {
               
           }
        else if (selection)
        {
            
        }
        else
            cout<<"Reenter selection"<<endl;
    }
    SSD *unit1 = new SSD("Boot","MN17H", 1024,"NVME","2,5 inch", "MLC");
    HDD *unit2 = new HDD("Storage", "WD157HF", 4096, "SATA", "3,5 inch", 5400);
    DataDevice *d[2] = {unit1, unit2};
    for (int i = 0; i<deviceNumber; i++)
    {
        d[i]->getData();
    }
    return 0;
}
