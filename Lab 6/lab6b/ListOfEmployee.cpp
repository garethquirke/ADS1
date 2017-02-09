#include "ListOfEmployee.h"
#include <fstream>
#include <istream>
#include <string>
#include <iostream>

// Constructor
ListOfEmployee::ListOfEmployee()
	:h(NULL)
{

}

// Destructor
ListOfEmployee::~ListOfEmployee()
{
	while (h != NULL)
	{
		EmployeeListNode* t = h;
		h = h->n;
		delete t;
	}
}

// Insert Node
void ListOfEmployee::insert(string name, double salary)
{
	EmployeeListNode* newNode = new EmployeeListNode(name, salary);
	newNode->n = h;
	h = newNode;
}

// Display
void ListOfEmployee::display()const
{
	EmployeeListNode* t = h;

	while (t != NULL)
	{
		cout << "Name: " << t->node.name << endl;
		cout << "Salary: " << t->node.salary << endl;

		t = t->n;
	}
}

double ListOfEmployee::getSalary(string name)
{
	EmployeeListNode* t = h;

	while (t != NULL)
	{
		if (t->node.name == name)
		{
			cout << "Salary: " << t->node.salary;
		}
		t = t->n;
	}
	return 0;
}

// Delete Recent
void ListOfEmployee::deleteMostRecent()
{
	EmployeeListNode* t = h;
	cout << "most recently entered data will be deleted" << endl;
	h = h->n;
	delete t;

}
