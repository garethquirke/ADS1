/* 
 * File:   EmployeeNode.h
 * Author: gareth
 *
 * Created on 04 December 2015, 00:19
 */

#pragma once
#include "ListOfEmployee.h"
#include "Employee.h"

class EmployeeNode{
    
    friend class ListOfEmployee;
    
private:
    EmployeeNode *next;
    Employee emp;
    
public:
    EmployeeNode(Employee eIn);
    void printNode();   
};

