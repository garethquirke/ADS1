#include "Money.h"

Money::Money()
{
	euro = 0;
	cent = 0;
}

Money::Money(int euroIn)
{
	euro = euroIn;
	cent = 0;
}

Money::Money(double euroIn, double centIn)
{
	euro = euroIn;
	cent = centIn;
}

istream& operator <<(istream& inputStream, Money& money) {


}

ostream& operator>>(ostream& outputStream, Money& money) {
	outputStream << "Balance is: " << "€" << money.euro << "." << money.cent;
	return outputStream;

}


const Money Money::operator*(int multiply) const
{
	double t1 = euro;
	double t2 = cent / 100;
	//http://stackoverflow.com/questions/798046/digit-limitation-from-decimal-point-in-c
	t1 = (t1 + t2) * multiply;
	int tEuro = (int)(t1);
	double tCent = t1 - tEuro;
	tCent *= 100;
	return Money(tEuro,tCent);
}

const Money Money::operator/(int divide) const
{
	return Money();
}

const Money Money::operator-(int subtract) const
{
	return Money();
}
