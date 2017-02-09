/* 
 * File:   ListOfDoubles.h
 * Author: gareth
 *
 * Created on 20 November 2015, 18:15
 */
#pragma once
#include "DoubleListNode.h"
#include <iostream>
using namespace std;
class ListOfDoubles{
    
    friend ostream& operator<<(ostream &output, const ListOfDoubles &l);
    
private:
    
    DblnodePtr head;
    
public:
    
    ListOfDoubles();
    ~ListOfDoubles();
    
    ListOfDoubles(const ListOfDoubles &l);
    const ListOfDoubles &operator=(const ListOfDoubles & l);
    
    void insert(double data);
    void display();
    void deleteMostRecent();
    double deleteDouble(int pos);
    double topValue() const;
};