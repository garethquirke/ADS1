#pragma once
#include <iostream>
using namespace std;

class Money {

	friend istream& operator <<(istream& inputStream, Money& money);
	friend ostream& operator>>(ostream& outputStream, Money& money);

private:
	int euro;
	double cent;

public:
	Money();
	Money(int euroIn);
	Money(double euroIn, double centIn);

	const Money operator*(int multiply) const;
	const Money operator/(int divide) const;
	const Money operator-(int subtract) const;



};
