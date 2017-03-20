//
//  ATC.hpp
//  Lab2
//
//  Created by Anton Solyarik on 19.03.17.
//  Copyright © 2017 Anton Solyarik. All rights reserved.
//

#ifndef ATC_hpp
#define ATC_hpp

#include <stdio.h>
#include "Abonent.hpp"
#include "ATC.hpp"
class ATC
{
private:
    unsigned int size;
    unsigned int counter;
    abonent **a;
   

public:
    ATC(unsigned int sizet);
    ~ATC();
    void getOvertime(int time);
    void getDatabynumber(char *number);
    void getOverdraw(int money);
    void addUser(char *nm, char *sr, char *th, char *ad, char *tlpn, int tm, int tr);
    void removeUser();
};

#endif /* ATC_hpp */
