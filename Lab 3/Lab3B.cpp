#include <iostream>
using namespace std;


//Gareth Quirke X00108966 Lab 3B

//FUCNTION DECLARATION
void inputAndAverage(double[]);






void inputAndAverage(double number[]){

	double sum = 0;
	int count = 0;

	for (int i = 0; i<5; i++){
		cout << "Enter number: ";
		cin >> number[i];
		cout << "\n";
		sum += number[i];
		count++;

	}

	cout << "Average is: " << sum / count << "\n";


	for (int i = 0; i < 5; i++){
		double differenceFromAverage = number[i] - (sum / count);
		cout << number[i] << " is " <<differenceFromAverage << " from the average \n";
	}

}

int main(){

	double numb[5];

	inputAndAverage(numb);
	cout << "\n";
	cout << "\n";
	system("pause");
	return 0;
}