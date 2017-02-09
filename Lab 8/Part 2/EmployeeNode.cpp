
#include "EmployeeNode.h"

EmployeeNode::EmployeeNode(Employee eIn){
    emp = eIn;
    next = NULL;
}
void EmployeeNode::printNode(){
    cout << "Name: " << emp.name << endl;
    cout << "Salary: " << emp.salary << endl;
}
