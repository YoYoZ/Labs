//
//  Abonent.hpp
//  Lab1
//
//  Created by Anton Solyarik on 28.02.17.
//  Copyright © 2017 Anton Solyarik. All rights reserved.
//

#ifndef Abonent_hpp
#define Abonent_hpp
#include <iostream>
#include <string>
#include <stdio.h>
class abonent
{
private:
    
    char
    *name,
    *surname,
    *thirdname,
    *adress,
    *telephN;
    
    int
    timetalking,
    tariff;
    
public:
    abonent(char *nm, char *sr, char *th, char *ad, char *tlpn, int tm, int tr): name(nm), surname(sr), thirdname(th),adress(ad),telephN(tlpn),timetalking(tm),tariff(tr)
    {
        
        name = new char[strlen((nm))];
        strcpy((name), (nm));
        surname = new char[strlen((sr))];
        strcpy((surname), (sr));
        thirdname = new char[strlen((th))];
        strcpy((thirdname), (th));
        adress = new char[strlen((ad))];
        strcpy((adress), (ad));
        telephN = new char[strlen((tlpn))];
        strcpy((telephN), (tlpn));
        
    }
    ~abonent()
    {
        delete[] name;
        delete[] surname;
        delete[] thirdname;
        delete[] adress;
        delete[] telephN;
        tariff = NULL;
        timetalking = NULL;
        
    }
    void setName(char *nm);
    void setSurname(char *nm);
    void setThirdname(char *nm);
    void setAdress(char *nm);
    void setTelephoneNumber(char *nm);
    void setTariff(int nm);
    void setTimeTalking(int nm);
    void getInfo();
    char *getName() {return name;};
    char *getSurname() {return surname;};
    char *getThirdname() {return thirdname;};
    char *getAdress() {return adress;};
    char *gettelephN() {return telephN;};
    int getTariff(){return tariff;};
    int getTimetalking(){return timetalking;};
    
};
#endif 
