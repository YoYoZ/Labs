//
//  HDD.hpp
//  Lab3
//
//  Created by Anton Solyarik on 28.03.17.
//  Copyright © 2017 Anton Solyarik. All rights reserved.
//

#ifndef HDD_hpp
#define HDD_hpp

#include <stdio.h>
#include <string>
#include "DataDevice.hpp"
using namespace std;
class HDD : public DataDevice
{
private:
    int speedOfSpindel;
public:
    HDD(string name, string modelName, int size, string interface, string formFactor, int speedOfSpindel);
    ~HDD(){};
    void showSpecificData();
};
#endif /* HDD_hpp */
