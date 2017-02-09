#include <iostream>
#include <cstdlib>
#include "HotDogStand.h"
using namespace std;


//Gareth Quirke X00108966
//Lab 4B


int main(){
	int idNum[5];
	int hotDogsSold[5];


	for (int i = 0; i < 5; i++){
		cout << "Input ID of hotdog stand " << (i + 1);
		cin >> idNum[i];
		cout << "Enter hot dogs sold for this stand";
		cin >> hotDogsSold[i];
	}

	HotDogStand b(idNum, hotDogsSold);
	b.justSold(2);

	int howmany = b.returnTotalSold(2);
	cout << "sold by a stand " << howmany;
	b.returnTotal();
	system("pause");
	return 0;
}