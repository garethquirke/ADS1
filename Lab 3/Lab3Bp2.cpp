#include <iostream>
using namespace std;


//Gareth Quirke X00108966 Lab 3B 
//FUNCTION Declaration


void average5(double [5]);



void average5(double input[5]){
	double sum = 0;
	int count = 0;

	for (int i = 0; i < 5; i++){

		sum += input[i];
		count++;

	}

	cout << "Average is: " << sum / count << "\n";

	for (int i = 0; i < 5; i++){
		double differenceFromAverage = input[i] - (sum / count);
		cout << "\n";
		cout << input[i] << " is " << differenceFromAverage << " from the average \n";


	}
	
}



int main(){


	double input[5];

	cout << "Enter 5 numbers \n";
	cout << "\n";

	for (int i = 0; i < 5; i++){

		
		cout << "Enter the "<< (i+1) << " number: \n";
		cin >> input[i];

	}
	average5(input);

	system("pause");

	return 0;
}