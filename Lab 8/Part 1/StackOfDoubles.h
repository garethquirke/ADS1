/* 
 * File:   StackOfDoubles.h
 * Author: gareth
 *
 * Created on 25 November 2015, 19:51
 */

#pragma once
#include "ListOfDoubles.h"
#include <iostream>
using namespace std;


class StackOfDoubles{
    
    friend ostream& operator<<(ostream& output,  StackOfDoubles &stackobj);
    
private:
    
    ListOfDoubles d;
    
    
    
public:
    
    //StackOfDoubles();
    void push(double number);
    void pop();
    double top();
    void print();
      
    
};
