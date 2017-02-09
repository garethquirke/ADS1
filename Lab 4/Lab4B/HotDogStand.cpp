#include "HotDogStand.h"
#include <iostream>
using namespace std;
//reference the help
static int totalSold = 0;


HotDogStand::HotDogStand(int f[], int s[]){
	

	for (int i = 0; i < 5; i++){
		standID[i] = f[i];
		hotdogSold[i] = s[i];
		totalSold = totalSold + s[i];
	}


}

//justSold()increments the number of hotdogs the stand has sold by one.

void HotDogStand::justSold(int id)
{
	for (int i = 0; i < 5; i++)
	{
		if (standID[i] == id)
		{
			hotdogSold[i]++;
			totalSold++;
		}
	}
}

int HotDogStand::returnTotalSold(int id)
{
	int i1 = 0;
	for (int i = 0; i < 5; i++){
		if (standID[i] == id){
			i1 = i;
		}
	}
	return hotdogSold[i1];
}

static int totalSoldDay()
{
	return totalSold;

}

void HotDogStand::returnTotal()
{
	cout << "Total hot dogs sold by all is: " << totalSoldDay();
}

