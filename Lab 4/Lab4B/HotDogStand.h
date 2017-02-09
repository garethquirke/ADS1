#include <iostream>
#include <cstdlib>

class HotDogStand
{
private:
	int standID[5];
	int hotdogSold[5];

public:

	HotDogStand(int f[], int s[]);
	void justSold(int id);
	int returnTotalSold(int id);
	void returnTotal();

};
