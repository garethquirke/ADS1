#include "Percent.h"
#include <iostream>
using namespace std;

int main(){
    
    Percent p1, p2;
	
    cout << "Enter a value in % form : ";
    cin >> p1;
	cout << "Enter a value in % form : ";
	cin >> p2;

	cout << "\n\n";
	
	/* Test Addition
	 * Test Subtraction
	 * Test Multiplication
	 * Test Division
	 */
	cout << "Addition of p1 and p2: " << p1 + p2 << endl;
	cout << "Subtraction of p1 and p2: "<<(p1 - p2) << endl;
	cout << "Multiplication of p1 and p2: "<<(p1 * p2) << endl;
	cout << "Division of p1 and p2: "<<(p1 / p2) << endl;

	//Test overloaded assignment
	p1 == p2;
	cout << p1 << endl;
	
	//Test < operator
	if (p1 < p2) {
		cout << "P1 is less than P2" << endl;
	}
	else if (p2 < p1) {
		cout << "P2 i less than P1" << endl;
	}

	system("pause");
    return 0;
}
