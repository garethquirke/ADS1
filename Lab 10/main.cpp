#include "Deque.h"
#include <iostream>
using namespace std;


int main() {

	Deque d(10);

	d.insertFront(1);
	d.insertFront(9);
	d.insertFront(1);
	d.insertFront(6);
	d.display();


	system("pause");
	return 0;
}