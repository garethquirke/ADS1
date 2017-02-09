#include <iostream>
using namespace std;

//task one lab 1
//Gareth Quirke x00108966

int main()
{
	cout << "Lab 1 task 1 \n";


	double weightOfCereal = 0;
	double weightInTonnes = 0;
	double ton = 35273.92;
	double outputBoxes = 0;

	cout << "Please enter the weight of the cereal package ";
	cin >> weightOfCereal;

	weightInTonnes = (weightOfCereal / ton);
	outputBoxes = (ton / weightOfCereal);

	cout << "This cereal has a weight of " << weightInTonnes << " in tonnes \n";
	cout << "number of boxes needed to yield a ton: " << outputBoxes << "\n";


	system("pause");

	return 0;
}
