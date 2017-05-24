//
//  struct.hpp
//  lab5
//
//  Created by Anton Solyarik on 14.05.17.
//  Copyright © 2017 Anton Solyarik. All rights reserved.
//

#ifndef struct_hpp
#define struct_hpp

#include <stdio.h>

template <class T>
class structure
{
public:
    structure(): element(NULL), next(NULL), prev(NULL) {}

    structure(T* t) : element(t) {}
    
    ~structure() {
        
    }
    
    T* element;
    structure<T>* next;
    structure<T>* prev;
};

#endif /* struct_hpp */
