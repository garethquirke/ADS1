#include <iostream>
#include <string>
#include <fstream> 
using namespace std;

//reference used: http://www.cplusplus.com/reference/fstream/ifstream/ifstream/
//ref: http://cpp-tutorial.cpp4u.com/STL_ifstream.html

//task four lab 1
//Gareth Quirke x00108966


int main()
{
	double backpay = 0;
	double const increase = 7.6;
	double salary = 0;
	double monthlySal = 0;


	fstream oldDetails;
	textfile.open("empDetails.txt", std::ifstream::in);
	while (!textfile.eof())
	{
		oldDetails >> salary;
		cout << salary;
	}

	textfile.close();
	backpay = (salary / 100) * increase;
	salary = salary + increase;
	monthlySal = salary / 12;

	std::ofstream ofs("empDetails.txt", std::ofstream::out);

	ofs << "Salary: " << salary << "\nMonthly Salary: " << monthlySal << "\nBack-Pay: " << increase;

	ofs.close();
	cout << "\n";
	system("pause");
	return 0;

}
