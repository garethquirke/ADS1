#pragma once
#include <iostream>
using namespace std;

class EmployeeListNode
{
	friend class ListOfEmployee;

private:

	struct node {
		string name;
		double salary;
	};
	
	EmployeeListNode* n;
	node node;

public:
	EmployeeListNode(string s, double d);

};