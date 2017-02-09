/* 
 * File:   Percent.h
 * Author: gareth
 *
 * Created on 22 November 2015, 20:52
 */

#include <iostream>
using namespace std;

class Percent{
    
private:
    int value;
    
public:
    Percent();
	Percent(int sum);
    
    friend bool operator ==(const Percent& first, const Percent& second);
    friend bool operator<(const Percent& first, const Percent& second);
    
    friend istream& operator >>(istream& inputStream, Percent& aPercent);
    friend ostream& operator <<(ostream& outputStream, const Percent& aPercent);
    
	const Percent Percent::operator+(const Percent& add);
	const Percent Percent::operator-(const Percent& subtract);
	const Percent Percent::operator*(const Percent& multiply);
	const Percent Percent::operator/(const Percent& divide);

    
};

/*
 * FIrst define a class for << and >> 
 * >> to make an object with the % symbol following int
 * << output a Percent object
 *
 * Now add overloaded operators for +,-,*,/
 *
 */

