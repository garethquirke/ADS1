#include <iostream>
#include <cmath>
using namespace std;

//FUNCTION DECLARATION
int displayOutput(int hours, int minutes, char period);
bool conversion(int &hour, int &min);
int input();



int displayOutput(int hours, int mins, char m){
	cout << "Time: " << hours << ":" << mins << m;
	cout << "\n";
	return 0;
}

bool conversion(int& hour, int& min) {
	char Am = 'A', Pm = 'P';
	bool test = true;

	

	if (hour <= 24 && hour < 12 && min < 60) {
		displayOutput(hour, min, Am);
		test = true;
	}
	else if (hour >= 12 && hour <= 24 && min < 60) {
		hour = hour - 12;
		displayOutput(hour, min, Pm);
		test = true;
	}

	else
	{
		test = false;
	}
	return test;
}

int input() {

	int hour, min;
	cout << "Please enter the hours: \n";
	cin >> hour;
	cout << "Please enter the minutes: \n";
	cin >> min;

	

	conversion(hour, min);

	return 0;
}




int main() {
	bool test = true;
	char in = ' ';
	while (test){
		input();

		cout << "Would you like to enter another time to convert? (Y/y or N/n) \n";
		cin >> in;
		if (in == 'Y' || in == 'y'){
			test = true;
		}
		else if (in == 'N' || in == 'n')
		{
			test = false;
		}


		//conversion
		

		//cout >> "Enter N or n to end conversion";
	}



	system("pause");

	return 0;
}










