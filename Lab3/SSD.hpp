//
//  SSD.hpp
//  Lab3
//
//  Created by Anton Solyarik on 28.03.17.
//  Copyright © 2017 Anton Solyarik. All rights reserved.
//

#ifndef SSD_hpp
#define SSD_hpp

#include <stdio.h>
#include "DataDevice.hpp"

class SSD : public DataDevice
{
private:
    string dataClusterType;
public:
    SSD(string name, string modelName, int size, string interface, string formFactor, string dataClusterType);
    ~SSD(){};
    void showSpecificData();
    
};
#endif /* SSD_hpp */
