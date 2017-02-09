/*

1. Write a program that converts from 24-hour notation to 12-hour notation. For
example, it should convert 14:25 to 2:25 P.M.
• The input is given as two integers.
• There should be at least three functions: one for user input (which will be 2
integers), one to do the conversion, and one for output to the screen.
There should be no global variables in your program, so you will need in
some cases to use pass-by-reference function parameters.
• Record the A.M./P.M. information determined by the conversion function as
a value of type char, ’A’ for A.M. and ’P’ for P.M. The function for doing the
conversion will return false if the integers passed to it do not correspond to
a 24 hour clock time.
• Include a loop that lets the user repeat this computation for new input
values again and again until the user says he or she wants to end the
program.
• NOTE THAT THERE SHOULD BE NO GLOBAL VARIABLES IN YOUR PROGRAM

*/
#include <iostream>
#include <cmath>
using namespace std;

/*Lab 3 week 2
//Gareth Quirke X00108966
Difference between parameter and argument
*/

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










