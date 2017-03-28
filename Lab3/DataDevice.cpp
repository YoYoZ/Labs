//
//  DataDevice.cpp
//  Lab3
//
//  Created by Anton Solyarik on 28.03.17.
//  Copyright © 2017 Anton Solyarik. All rights reserved.
//

#include "DataDevice.hpp"

DataDevice::DataDevice(string name, string modelName, int size, string interface, string formFactor) : name(name), modelName(modelName), size(size), interface(interface), formFactor(formFactor)
{
    
}
void DataDevice::getData()
{
    cout<<"********************************************"<<endl;
    cout<<"Output of data for "<<name<<" device"<<endl;
    cout <<"Size: "<<size<<" | Interface: "<<interface<<endl;
    cout<<"Model name: "<<modelName<<" | Form factor: "<<formFactor<<endl;
    cout<<"********************************************"<<endl;
}
