#include "DoubleListNode.h"
#include "ListOfDoubles.h"
#include "EmployeeListNode.h"
#include "ListOfEmployee.h"
#include <iostream>
using namespace std;

int main()
{
	ListOfDoubles list;

	cout << "---SECTION A---" << "\n\n";

	cout << "inserting values to list.." << endl;
	list.insert(1.5);
	cout << "value 1 inserted" << endl;
	list.insert(2.5);
	cout << "value 2 inserted" << endl;
	list.insert(3.5);
	cout << "value 3 inserted" << endl;
	list.insert(4.5);
	cout << "value 4 inserted" << endl;
	list.insert(5.5);
	cout << "value 5 inserted" << endl;
	list.insert(6.5);
	cout << "value 6 inserted" << endl;

	cout << "all values inserted to list" << endl;
	cout << "\n";

	cout << "displaying values.." << endl;
	list.display();
	cout << "\n\n";

	cout << "deleting most recent value.." << endl;
	list.deleteMostRecent();
	cout << "most recent value deleted from the list" << endl;
	list.display();

	cout << "\n\n";
	cout << "press any button to get results of SECTION B.." << endl;
	system("pause");

	cout << "\n";
	cout << "---SECTION B---" << "\n\n";

	ListOfEmployee list2;

	cout << "inserting values to list.." << endl;
	list2.insert("Mike", 20000.00);
	cout << "value 1 inserted" << endl;
	list2.insert("Bob", 30000.00);
	cout << "value 2 inserted" << endl;
	list2.insert("Sheila", 50000.00);
	cout << "value 3 inserted" << endl;

	cout << "all values inserted to list" << endl;
	cout << "\n";

	cout << "displaying values.." << endl;
	list2.display();
	cout << "\n\n";

	cout << "getting salary for employee: Bob" << endl;
	list2.getSalary("Bob");
	cout << "\n\n";

	cout << "deleting most recent value.." << endl;
	list2.deleteMostRecent();
	cout << "most recent value deleted from the list" << endl;
	list2.display();

	system("pause");
	return 0;
}