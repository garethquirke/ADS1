int main() {
	fstream payFile, newPayFile;
	string name;
	string fileData;
	int i = 0;
	double salary, newAnnualSalary, newMonthlySalary, backPay, totalBackPay = 0;
	const double payIncreaseRate = 0.076;

	//The task 5 file needs 'NAME space NUMBER' format
	payFile.open("Task 5.txt", fstream::in | fstream::out); //Opens the file for reading/writing and stores the file location in annaulPay, found on stackoverflow.com

	if (!payFile.fail()) {
		newPayFile.open("Task 5 NEW.txt", fstream::out); //Creates a new file and only allows outputs to the file

		while (payFile >> name >> salary) { //Runs through each line of the file and get the name and salary as a double
			newAnnualSalary = salary / 2;
			backPay = newAnnualSalary * payIncreaseRate;
			newAnnualSalary = salary + backPay; //Stores the salary with the pay increase added
			newMonthlySalary = newAnnualSalary / 12;
			newPayFile << name << ": Pay increase - " << backPay << "\n";
			newPayFile << "New annual salary - " << newAnnualSalary << "\n";
			newPayFile << "New monthly pay - " << newMonthlySalary << "\n\n";
			i++;
			totalBackPay += backPay;
		}
		newPayFile << "Total back pay due - " << totalBackPay << endl;
		newPayFile << "Total number of employees - " << i << endl;
		payFile.close();
		newPayFile.close();
		system("pause");
	}
	else {
		cout << "Failed to find file\n";
		system("pause");
		return 1;
	}
	return 0;
}
