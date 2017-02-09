#include <iostream>
#include <fstream>
using namespace std;

//Gareth Quirke X00108966
//Lab 3C



//Function declaration
void purchase(int qtW, int qtG, int qtT, double cost1, double cost2, double cost3);
void menu(double &cost1, double &cost2, double &cost3);
double increasePrice(double cost, double percentage);
//(double nWidget, double nGadget, double nToggle);
//use a break instead of an exit function
//&& for update of prices



int main() {


	double widget = 10, gadget = 15, toggle = 12;







	menu(widget, gadget, toggle);
	cout << "The Items availible are: " << "\n";
	cout << "Widget at a cost of: " << widget << "\n";
	cout << "Gadget at a cost of: " << gadget << "\n";
	cout << "Toggle at a cost of: " << toggle << "\n";


	std::ofstream outputF("output.txt", std::ofstream::out);
	outputF << "The Items availible are: " << "\n";
	outputF << "The Items availible are: " << "\n";
	outputF << "Widget at a cost of: " << widget << "\n";
	outputF << "Gadget at a cost of: " << gadget << "\n";
	outputF << "Toggle at a cost of: " << toggle << "\n";

	system("pause");
	return 0;
}

void menu(double &cost1, double &cost2, double &cost3) {


	cout << "The Items availible are: " << "\n";
	cout << "Widget at a cost of: " << cost1 << "\n";
	cout << "Gadget at a cost of: " << cost2 << "\n";
	cout << "Toggle at a cost of: " << cost3 << "\n";

	bool menu = true;

	while (menu) {
		int choice = 0;

		cout << "Welcome to the menu! \n";
		cout << "\n";
		cout << "Please select an option by inputting a number: \n";

		cout << "1. Purchase \n";
		cout << "2. Increase Price \n";
		cout << "3. Exit \n";

		cin >> choice;

		if (choice == 1) {
			int qtW, qtG, qtT;
			cout << "Please enter quantity of widget \n";
			cin >> qtW;
			cout << "Please enter quantity of gadget \n";
			cin >> qtG;
			cout << "Please enter quantity of toggle \n";
			cin >> qtT;

			purchase(qtW, qtG, qtT, cost1, cost2, cost3);
			

			char isFinished = 'x';
			cout << "Do you want to be returned to the menu? Type Y or y for yes" << endl;
			cin >> isFinished;
			if (isFinished == 'Y' || isFinished == 'y');
			{
				menu = true;
			}
		}

		else if (choice == 2) {

			int input;
			bool test = true;

			cout << "You have chosen to update price of a product \n";
			cout << "1 for Widget \n";
			cout << "2 for Gadget \n";
			cout << "3 for Toggle \n";
			cin >> input;


			while (test) {

				double percentage = 0;
				cout << "Please enter the product number, for the item you wish to update \n";

				if (input = 1) {
					cout << "Enter price increase: ";
					cin >> percentage;
					cout << "\n";
					increasePrice(cost1, percentage);
					test = false;
				}
				else if (input = 2) {
					cout << "Enter price increase: ";
					cin >> percentage;
					cout << "\n";

					increasePrice(cost2, percentage);
					test = false;
				}
				else if (input = 3) {
					cout << "Enter price increase: ";
					cin >> percentage;
					cout << "\n";

					increasePrice(cost3, percentage);
					test = false;
				}
				else
				{
					cout << "Input is wrong. Please try again";
				}

				char isFinished = 'x';
				cout << "Do you want to be returned to the menu? Type Y or y for yes" << endl;
				cin >> isFinished;
				if (isFinished == 'Y' || isFinished == 'y');
				{
					menu = true;
				}
			
			}



		}
		else if (choice == 3) {
			cout << "Thank you for visiting the store" << endl;
			menu = false;
		}
	}
}

void purchase(int qtW, int qtG, int qtT, double cost1, double cost2, double cost3) {



	double totalCost = (qtW * cost1) + (qtG * cost2) + (qtT * cost3);


	cout << "\n";
	cout << "Total cost is: " << totalCost << "\n";


}


double increasePrice(double cost, double percentage) {

	double newCost = cost * (1 + percentage / 100);
	//(new price = old price * ( 1 + percentage / 100 ) )
	//output to file of all the prices

	cout << "Price has been updated to " << newCost << endl;



	return newCost;
}
/*The
new price of the item should then be calculated (use a function and return the
new price) and displayed (new price = old price * ( 1 + percentage / 100 ) )
The application should then update the relevant price, and re-display the list
of 3 items with their prices.

the new costs will be passed into menu so that they can be dispayed as they are updated
main feautrues the original costs this way they can be calcualted in increase price

neeed to pass price into the update cost function ???
*/