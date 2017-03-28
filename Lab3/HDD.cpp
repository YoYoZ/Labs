//
//  HDD.cpp
//  Lab3
//
//  Created by Anton Solyarik on 28.03.17.
//  Copyright © 2017 Anton Solyarik. All rights reserved.
//

#include "HDD.hpp"
#include <string>

using namespace std;

HDD::HDD(string name, string modelName, int size, string interface, string formFactor, int speedOfSpindel) : DataDevice(name, modelName, size, interface, formFactor)
{
    this->speedOfSpindel = speedOfSpindel;
}

void HDD::showSpecificData()
{
   
    cout<<"This is HDD, so here is speed of spindel: "<< speedOfSpindel<<endl;
    cout<<"********************************************"<<endl;

}
