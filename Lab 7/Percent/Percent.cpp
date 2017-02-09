#include "Percent.h"

Percent::Percent(){
    value = 0;
}

Percent::Percent(int sum) {
	value = sum;
}


istream& operator >>(istream& inputStream,Percent& aPercent){
	char percentSign;
    inputStream >> aPercent.value;
    inputStream >> percentSign;
    return inputStream;
    
}

ostream& operator <<(ostream& outputStream, const Percent& aPercent){
    outputStream << aPercent.value << '%';
	return outputStream;
}

const Percent Percent::operator+(const Percent& add)
{
	Percent p;
	p.value = this->value + add.value;
	return p;

}

const Percent Percent::operator-(const Percent & subtract)
{
	Percent p;
	p.value = this->value - subtract.value;
	return p;
}

const Percent Percent::operator*(const Percent& multiply) {
	Percent p;
	
	float p1,p2,result;
	p1 = this->value / 100;
	p2 = multiply.value /100;
	result = (p1 + p2) / 100;

	int fResult = int(result);
	p.value = fResult;
	return p;
}

const Percent Percent::operator/(const Percent& divide) {
	Percent p;
	p.value = this->value / divide.value;
	return p;
}

bool operator ==(const Percent& first, const Percent& second) {

	return (first.value == second.value);

}

bool operator<(const Percent& first, const Percent& second) {
	bool b;
	if (first.value < second.value) {
		b = true;
	}
	else {
		b = false;
	}
	return b;
}