#include "EmployeeListNode.h"
#include <iostream>
using namespace std;

EmployeeListNode::EmployeeListNode(string s, double d)
{
	node.name = s;
	node.salary = d;
}