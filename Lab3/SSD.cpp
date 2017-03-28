//
//  SSD.cpp
//  Lab3
//
//  Created by Anton Solyarik on 28.03.17.
//  Copyright © 2017 Anton Solyarik. All rights reserved.
//

#include "SSD.hpp"
#include <string>

using namespace std;

SSD::SSD(string name, string modelName, int size, string interface, string formFactor, string dataClusterType) : DataDevice(name, modelName, size, interface, formFactor)
{
    this->dataClusterType = dataClusterType;
}
void SSD::showSpecificData()
{
    
    cout<<"This is SSD, so here is data storage type: "<< dataClusterType<<endl;
    cout<<"********************************************"<<endl;

}
