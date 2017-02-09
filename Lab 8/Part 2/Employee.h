/* 
 * File:   Employee.h
 * Author: gareth
 *
 * Created on 04 December 2015, 00:22
 */

#pragma once
#include <string>
#include <iostream>
using namespace std;

class Employee{
    friend class EmployeeNode;
    friend class EmployeeList;
    
private:
    string name;
    double salary;
    
public:
    Employee();
    
};

