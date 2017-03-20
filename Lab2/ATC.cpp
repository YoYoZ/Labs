

#include <iostream>
#include <string>
#include "ATC.hpp"
#include "Abonent.hpp"
using namespace std;

ATC::ATC(unsigned int sizet)
{
    this->a = new abonent * [sizet];
    this->size = sizet;
    this->counter = 0;
}

ATC::~ATC()
{
    for (int i = 0; i < size; ++i)
    {
        delete this->a[i];
    }
    delete a;
    size = NULL;
    counter = NULL;
}

void ATC::getOvertime(int time)
{
    for (int i = 0; i< size; i++)
      if (this->a[i]->getTimetalking()>=time)
                cout <<"User "<<this->a[i]->getName()<<" got overtime!"<<endl;
    
}


void ATC::getOverdraw(int money)
{
    for (int i = 0; i< size; i++)
        if (this->a[i]->getTariff()>=money)
        {
            {
                {
                    cout <<"User "<<this->a[i]->getName()<<" got overdraw!"<<endl;
                    this->a[i]->getInfo();
                }
            }
        }
}

void ATC::getDatabynumber(char *number)
{
    for (int i = 0; i< size; i++)
        if (strcmp(this->a[i]->gettelephN(), number) == 0)
            this->a[i]->getInfo();
}

void ATC::addUser(char *nm, char *sr, char *th, char *ad, char *tlpn, int tm, int tr)
{
    if(counter!=size)
    {
        this-> a[counter] = new abonent(nm, sr, th, ad, tlpn, tm, tr);
        ++counter;
    }
    else
        cout<<"Overload from set size"<<endl;

}
void ATC::removeUser()
{
    
}
