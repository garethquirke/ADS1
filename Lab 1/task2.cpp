#include <iostream>
using namespace std;

//task two lab 1
//Gareth Quirke x00108966


int main(){


	double const sweetenerAmount = 0.001;
	double amountNeededToKillMouse = 0;
	double weightOfMouse = 0;
	double weightOfDieterAtGoal = 0;
	
	

	//outputs
	double answer = 0;


	cout << "Enter the amount of soda needed to kill a mouse: ";
	cin >> amountNeededToKillMouse;

	cout << "Enter weight of mouse: ";
	cin >> weightOfMouse;

	cout << "Enter the weight of the dieter at his or her goal: ";
	cin >> weightOfDieterAtGoal;



	answer = (weightOfDieterAtGoal / weightOfMouse) * amountNeededToKillMouse;
	answer = answer * sweetenerAmount;








	system("pause");
	return 0;

}