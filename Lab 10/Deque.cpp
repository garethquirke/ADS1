#include "Deque.h"
Deque::Deque()
{
	head = tail = 0;

	size = 10;
	count = 0;
	array = new int[10];
}

// focus on size passed in array firstly

Deque::Deque(int sizeIn)
{
	head = 0;
	tail = 0;

	size = sizeIn;
	count = 0;
	array = new int[sizeIn];
}

bool Deque::isEmpty()
{
	if (head == 0 && tail == 0) {
		return true;
	}

	else
	return false;
}

//head is 1, tail is 0
//1-0 = 1;

bool Deque::isFull()
{
	
	if (head - tail == 1) {
		return true;
	}

	else if (count > size) {
		return true;
	}
	/*

	*/

	else
		return false;
	
}

bool Deque::insertFront(int value)
{

	 if (isEmpty()) {
		// head goes to one, value goes to index 0, number of elements increments
		array[head] = value;
		head++;
		count++;
		return true;
	 }

	else if (isFull()) {
		cout << "Queue is full unfortunately" << endl;
		return false;
	}


	else {
		tail = (tail + 1) % 3;

	}

	
	return true;
}

bool Deque::removeFront(int & value)
{
	return false;
}

bool Deque::insertBack(int value)
{
	return false;
}

bool Deque::removeBack(int & value)
{
	return false;
}

void Deque::display()
{
	for (int i = 0; i < count; i++) {
		cout << array[i] << endl;
	}
}

/*
head moves forward when added


*/