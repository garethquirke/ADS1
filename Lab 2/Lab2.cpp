#include <iostream>
using namespace std;

int main() {

	const int priceOfBar = 1;
	double amtMoney = 0;
	int amtCoupons = 0;
	int redemtion = 0;
	int totBars = 0;

	cout << "Enter amount of money you have to purchase bars: " << endl;
	cin >> amtMoney;

	while (amtMoney > 0)
	{
		totBars++;
		amtCoupons += 1;


		if(amtCoupons>=7){
			amtCoupons -= 6;
			totBars++;
			redemtion++;
		}
		amtMoney = amtMoney - priceOfBar;
	
	}
	

	cout << "Total number of bars brought home today: " << totBars << endl;
	cout << "You redeemed: " << redemtion << " bars today" << endl;
	cout << "Amount of vouchers remaining: " << amtCoupons << endl;



	system("pause");

	return 0;
}