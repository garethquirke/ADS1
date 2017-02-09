#include <iostream>
using namespace std;

//task three lab 1
//Gareth Quirke X00108966

int main(){

	int hoursWorked = 0;
	double hourlyRate = 0;
	char input = "y";
	bool b = true;

	while (b == true){

		double earnings;

		cout << "Enter amount of hours worked: ";
		cin >> hoursWorked;

		cout << "Enter your hourly rate: ";
		cin >> hourlyRate;

		//calculations for gross pay and earnings
		if (hoursWorked > 40){
			double overtime = hoursWorked - 40;
			double earnings = (overtime *(1.5 * hourlyRate)) + (40 * hourlyRate);
			cout << "Earnings this week: $ " << earnings << "\n";

		}
		else
		{
			double earnings = (hoursWorked * hourlyRate);
			cout << "Earnings this week: $ " << earnings << "\n";
		}

		

		
		cout << "Would you like to enter details for another employee?";
		cin >> input;

		if (input == 'N'){
			t = false;
		}
		else if (input == 'n')
		{
			t = false;
		}
		else{
			t = false;
		}



	}
	//system("pause");
	return 0;
}