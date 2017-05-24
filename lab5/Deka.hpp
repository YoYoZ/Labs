//
//  Deka.hpp
//  lab5
//
//  Created by Anton Solyarik on 14.05.17.
//  Copyright © 2017 Anton Solyarik. All rights reserved.
//

#ifndef Deka_hpp
#define Deka_hpp

#include <stdio.h>
#include <iostream>
#include "struct.hpp"


template <class T>
class deka
{
private:
    structure<T>* head;
    structure<T>* tail;
    bool once = true;
public:
    deka() {}
    ~deka() {
        
    }
    
    void push(T* element)
    {
        structure<T> *str = new structure<T>(element);
        if (checkEmpty()) {
            head = str;
        }
        else {
            if (tail == NULL) {
                tail = str;
                head->next = tail;
                tail->prev = head;
            } else {
                if (once)
                   head->next = tail;
                tail->next = str;
                str->prev = tail;
                tail = str;
            }
        }
        if(once)
        {
        this->removeFromTop();
        once = false;
        }
    }
    
    bool checkEmpty()
    {
        return head == NULL;
    }
    
    int getCount()
    {
        int count = 0;
        structure<T>* temp = head;
        while (temp != NULL)
        {
            temp = temp->next;
            count++;
        }
        return count;
    }
    
    void removeFromTop()
    {
        int size = getCount();
        if (size > 1) {
            structure<T> *tmp = head;
            head = head->next;
            //delete tmp;
        }
        else if (size == 1) {
            delete head;
            head = NULL;
        }
    }
    
    void removeFromBottom()
    {
        int size = getCount();
        if (size > 1) {
            structure<T> *tmp = tail;
            tail = tail->prev;
            //delete tmp;
        }
        else if (size == 1) {
            delete tail;
            tail = NULL;
        }
    }
    void output()
    {
        structure<T> *temp;
        temp = head;
        while(temp!=tail)
        {
            temp = temp->next;
            std::cout<<*(temp->element)<<std::endl;
        }
    }
    
};
#endif /* Deka_hpp */
