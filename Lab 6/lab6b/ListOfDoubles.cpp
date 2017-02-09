#include "ListOfDoubles.h"
#include <iostream>
using namespace std;

// Constructor
ListOfDoubles::ListOfDoubles()
	:h(NULL)
{

}

// Destructor
ListOfDoubles::~ListOfDoubles()
{
	while (h != NULL)
	{
		DoubleListNode* t = h;
		h = h->n;
		delete t;
	}
}

// Insert Node
void ListOfDoubles::insert(double value)
{
	DoubleListNode *newNode = new DoubleListNode(value);
	newNode->n = h;
	h = newNode;
	newNode->value;
}

// Display
void ListOfDoubles::display()const
{
	DoubleListNode* t = h;

	while (t != NULL)
	{
		cout << "node: " << t->value << endl;
		t = t->n;
	}
}

// Delete Recent
void ListOfDoubles::deleteMostRecent()
{
	DoubleListNode* t = h;
	cout << "most recently entered data of value " << t->value << " will be deleted" << endl;
	h = h->n;
	delete t;

}

