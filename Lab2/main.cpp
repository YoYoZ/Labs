//
//  main.cpp
//  Lab2
//
//  Created by Anton Solyarik on 19.03.17.
//  Copyright © 2017 Anton Solyarik. All rights reserved.
//

#include <iostream>
#include "ATC.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    ATC *a =  new ATC(3);
    a->addUser("Anton","Solyarik","Sergeevich","Kiev","0635814472", 15, 1);
    a->addUser("Maksim","Solyarik","Vasiliyevich","Kiev","063581472", 1, 5);
    a->addUser("Denis","Solyarik","Sergeevich","Kiev","063581442", 4, 10);
    cout<<"How would you like to find out shit about abonets?" << endl;
    bool autom;
    cout<<"Type 1 for automatic test, 0 for manual use"<<endl;
    cin>>autom;
    if(autom)
    {
        a->getDatabynumber("0635814472");
        a->getOverdraw(5);
        a->getOvertime(5);
    } else
    {
        
        cout << "1. By phone number." << endl;
        cout << "2. By overdraw." << endl;
        cout << "3. By overtime." << endl;
        int i = 0;
        cin >> i;
        char number[11] = {0};
        switch (i)
        {
            case 1:
                cout << "Type number: ";
                for (int i = 0; i < 10; ++i)
                {
                    cin >> number[i];
                }
                cout << "Good boy." << endl;
                a->getDatabynumber(number);
                break;
            case 2:
                int draw;
                cout << "Type overdraw value: ";
                cin >> draw;
                a->getOverdraw(draw);
                break;
            case 3:
                int time;
                cout << "Type time value: ";
                cin >> time;
                a->getOvertime(time);
                break;
            default:
                cout << "Nope. You typed wrong number.";
                break;
        }
        
    }
    return 0;
}
