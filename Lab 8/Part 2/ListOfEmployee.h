/* 
 * File:   ListOfEmployee.h
 * Author: gareth
 *
 * Created on 04 December 2015, 00:15
 */

#pragma once
#include <iostream>
#include <string>
#include "EmployeeNode.h"
using namespace std;

class ListOfEmployee{
      
private:
   
    EmployeeNode *head;
    
    
public:
    ListOfEmployee();
    ~ListOfEmployee();
    void insert(string nameIn, double salaryIn);
    void display();
    void deleteMostRecent();
};


