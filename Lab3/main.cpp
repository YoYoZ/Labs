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
    const int deviceNumber = 3;
    bool isSSD;
    string inputdata[6];
    int size;
    cout<<"Enter name"<<endl;
    cin>>inputdata[0];
    cout<<"Enter model name"<<endl;
    cin>>inputdata[1];
    cout<<"Enter size"<<endl;
    cin>>size;
    cout<<"Enter interface"<<endl;
    cin>>inputdata[3];
    cout<<"Enter form factor"<<endl;
    cin>>inputdata[4];
    cout<<"Is it SSD? "<<endl;
    cin>>isSSD;
    if(isSSD)
        cout<<"Enter type of data cell"<<endl;
    cin>>inputdata[5];
    SSD *unit3 = new SSD(inputdata[0],inputdata[1],size,inputdata[3],inputdata[4],inputdata[5]);
    SSD *unit1 = new SSD("Boot","MN17H", 1024,"NVME","2,5 inch", "MLC");
    HDD *unit2 = new HDD("Storage", "WD157HF", 4096, "SATA", "3,5 inch", 5400);
    DataDevice *d[deviceNumber] = {unit1, unit2, unit3};
    for (int i = 0; i<deviceNumber; i++)
    {
        d[i]->getData();
    }
    return 0;
}
