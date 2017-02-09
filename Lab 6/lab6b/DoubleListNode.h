#pragma once
#include <iostream>
using namespace std;

class DoubleListNode
{
	friend class ListOfDoubles;

private:
	double value;
	DoubleListNode* n;

public:
	DoubleListNode(double);
};