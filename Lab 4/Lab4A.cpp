#include <iostream>
using namespace std;


//Gareth Quirke X0018966 Lab 4 A

//FUNCTION DECLARATION
void deleteRecords(char array[], int spacesFilled); //pass in partially filled array of chars and number of positions filled - int

/*
Write a function called deleteRepeats that has a partially filled array of characters as a formal parameter
and that deletes all repeated letters from the array. Since a partially filled array requires two arguments,
the function will actually have two formal parameters: an array parameter and a formal parameter of
type int that gives the number of array positions used. When a letter is deleted, the remaining letters
are moved forward to fill in the gap. This will create empty positions at the end of the array so that less
of the array is used. Since the formal parameter is a partially filled array, a second formal parameter of
type int will tell how many array positions are filled. This second formal parameter will be a call-byreference
parameter and will be changed to show how much of the array is used after the repeated
letters are deleted. For example, consider the following code:
char a[10];
a[0] = �a�;
a[1] = �b�;
a[2] = �a�;
a[3] = �c�;
int size = 4;
deleteRepeats(a, size);
*/


int main() {

	char a[10] = { 'a', 'b', 'a', 'c' };
	int size = 10;
	deleteRecords(a, size);

	system("pause");
	return 0;
}

void deleteRecords(char array[], int size) {

	
	for (int i = 0; i < size; i++) {

		//goes through all elements
		char value;
		value = array[i];

		for (int i = size +1; i < size; i++){
			//if element above matches the one found above
			//it will be notified below
			if (value == array[i]) {
				cout << value << " test match may have been found at " << i;
				
			}

			else {
				size++;

				cout << size;
			}
		}


	}
}