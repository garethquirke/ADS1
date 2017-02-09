#pragma once
#include "DoubleListNode.h"
#include <iostream>
using namespace std;

class ListOfDoubles
{
private:
	DoubleListNode* h;

public:
	ListOfDoubles();
	~ListOfDoubles();
	void insert(double v);
	void display() const;
	void deleteMostRecent();
	double deleteDouble(int pos);
};