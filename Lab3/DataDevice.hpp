//
//  DataDevice.hpp
//  Lab3
//
//  Created by Anton Solyarik on 28.03.17.
//  Copyright © 2017 Anton Solyarik. All rights reserved.
//

#ifndef DataDevice_hpp
#define DataDevice_hpp

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class DataDevice
{
private:
    string name;
    string modelName;
    int size;
    string interface;
    string formFactor;
    
public:
    
    DataDevice(string name, string modelName, int size, string interface, string formFactor);
    virtual ~DataDevice(){};
    virtual void getData();
    
};
#endif /* DataDevice_hpp */
