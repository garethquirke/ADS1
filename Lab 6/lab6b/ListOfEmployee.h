#pragma once
#include "EmployeeListNode.h"
#include <iostream>
using namespace std;

class ListOfEmployee
{
private:
	EmployeeListNode* h;

public:
	ListOfEmployee();
	~ListOfEmployee();
	void insert(string s, double d);
	void display() const;
	void deleteMostRecent();
	double getSalary(string name);
};