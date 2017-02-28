
#include "Abonent.hpp"

using namespace std;
#include <iostream>
#include <string>


void abonent::setName(char *nm)
    {
        if (name!=NULL)
        {
            delete[] name;
            name = new char[strlen((nm))];
            strcpy((name), (nm));
        }
        else
        {
            name = new char[strlen((nm))];
            strcpy((name), (nm));
        }
        
    }
void abonent::setSurname(char *nm)
    {
        if (surname!=NULL)
        {
            delete[] surname;
            surname = new char[strlen((nm))];
            strcpy((surname), (nm));
        }
        else
        {
            surname = new char[strlen((nm))];
            strcpy((surname), (nm));
        }
    }
void abonent::setThirdname(char *nm)
    {
        if (thirdname!=NULL)
        {
            delete[] thirdname;
            thirdname = new char[strlen((nm))];
            strcpy((thirdname), (nm));
        }
        else
        {
            thirdname = new char[strlen((nm))];
            strcpy((thirdname), (nm));
        }
    }
    void abonent::setAdress(char *nm)
    {
        if (adress!=NULL)
        {
            delete[] adress;
            adress = new char[strlen((nm))];
            strcpy((adress), (nm));
        }
        else
        {
            adress = new char[strlen((nm))];
            strcpy((adress), (nm));
        }
    }
    void abonent::setTelephoneNumber(char *nm)
    {
        if (telephN!=NULL)
        {
            delete[] telephN;
            telephN = new char[strlen((nm))];
            strcpy((telephN), (nm));
        }
        else
        {
            telephN = new char[strlen((nm))];
            strcpy((telephN), (nm));
        }
    }
    void abonent::setTariff(int nm)
    {
        tariff = nm;
    }
    void abonent::setTimeTalking(int nm)
    {
        timetalking = nm;
    }
void abonent::getInfo()
    {
        cout<<"**************************"<<endl;
        cout <<name<<" "<<surname<<" "<<thirdname<<" "<<endl;
        cout<<telephN<<" "<<adress<<" "<<endl;
        cout<<"Tariff: "<<tariff<<endl;
        cout<<"TimeTalked: "<<timetalking<<endl;
        cout<<"**************************"<<endl;
    }
    

