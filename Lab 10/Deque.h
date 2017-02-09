#include <iostream>
using namespace std;

class Deque {

private:
	/*
	Deque*head;
	Deque*tail;
	*/
	int size, count, head, tail;
	int *array;

public:
	Deque();
	Deque(int sizeIn);


	bool isEmpty();
	bool isFull();
	
	bool insertFront(int value);
	bool removeFront(int& value);

	bool insertBack(int value);
	bool removeBack(int& value);

	void display();
};
