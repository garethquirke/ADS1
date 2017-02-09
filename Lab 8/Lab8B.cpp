/* 
 * File:   main.cpp
 * Author: gareth
 *
 * Created on 07 December 2015, 18:35
 */

//Objects of this class are partially filled arrays of doubles.
#include <iostream>
using namespace std;

class PFArrayD
{
public:

	PFArrayD(); //Initializes with a capacity of 50.
	PFArrayD(const PFArrayD &copy);
	PFArrayD(int capacityValue); //pass in capactity value
	void addElement(double element); //pass in a element to array if not full
	
	bool full() const { return (capacity == used); } //Returns true if the array is full, false otherwise.
	
	int getCapacity() const { return capacity; } //get the total capacity
	int getNumberUsed() const { return used; } //get the number of spaces used in array

	void emptyArray() { used = 0; } //Empties the array.
	
	double& operator[](int index); //Read and change access to elements 0 through numberUsed - 1.
	
	PFArrayD& operator =(const PFArrayD& rightSide); //overloaded assignment
	~PFArrayD(); //deconstructor possible cause of an error

private:
	double *a; //For an array of doubles
	int capacity; //For the size of the array
	int used; //For the number of array positions currently in use
};


PFArrayD::PFArrayD() :capacity(50), used(0)
{
	a = new double[capacity];
}
PFArrayD::PFArrayD(const PFArrayD& copy)
:capacity(copy.getCapacity()), used(copy.getNumberUsed())
{
    /*
     * Source: Absolute C++ Chapter 10 - POinnters and Dynamic arrays
     * Author:  Walter Savitch
     * Usage: Used
     * Accesed on Moodle (page 453 in book)
     * Date: 7th December
     */
    
    a = new double[capacity];
    for (int i= 0; i< used; i++){
        a[i] = copy.a[i];
    }
	/*
         * A deep copy here replaces the original code
         * to cater for the error in which the pointer
         * would be left undefined after being passed in.
         * The definition of the overloaded assignment 
         * should be able to handle both cases. 
         */
    
         /*
          * The overloaded assignment needed to use a properly
          * functioning copy constructor that preformed a deep
          * copy. When calling overloaded =, it carries out
          * what is contained in this function which includes
          * delete [] a;
          * This does not cater for an object passed in which
          * could be newArr for example. The only way we could
          * do this is by calling delete [] newArr.a; instead.
          * But this is undefined and thus it corrupts newArr 
          * filling it with 50 junk pieces of data which I seen
          * in the console output.
          */
}
PFArrayD::PFArrayD(int size) : capacity(size), used(0)
{
	a = new double[capacity];
}

void PFArrayD::addElement(double element)
{
	if (used >= capacity)
	{
		cout << "Attempt to exceed capacity in PFArrayD.\n";
		//exit(0);
	}
	a[used] = element;
	used++;
}
double& PFArrayD::operator[](int index)
{
	if (index >= used)
	{
		cout << "Illegal index in PFArrayD.\n";
		//exit(0);
	}
	return a[index];
}

PFArrayD& PFArrayD::operator =(const PFArrayD& rightSide)
{
/* Note that this also checks for
 * the case of having the same object 
 * on both sides of the assignment operator
 */

	if (capacity != rightSide.capacity)
	{
		delete[] a;
		a = new double[rightSide.capacity];
	}

	capacity = rightSide.capacity;
	used = rightSide.used;
	for (int i = 0; i < used; i++)
		a[i] = rightSide.a[i];
	return *this;
}

PFArrayD::~PFArrayD()
{
	cout << "Deconstructor called." << endl;

	/*seems like the deconstructor is being called before end
	 * and after end. 
	 */
	
	delete[] a;
}

void showPFArrayD(PFArrayD parameter)
{
	cout << "The first value is: " << parameter[0] << endl;
}



int main()
{

	PFArrayD sample(2);
	PFArrayD test(2);

	sample.addElement(5.5);
	sample.addElement(6.6);

	test.addElement(5.5);
	test.addElement(6.6);

	cout << sample.getNumberUsed() << endl;

        /*
         * Deconstructor is called three times 
         * because there was three objects created.
         */

	showPFArrayD(sample);

	cout << "After call: " << sample[0] << endl;
	//system("pause");
        
        
        //testing
        int count;
        cout << "Enter the capacity: ";
        cin >> count;
        
        PFArrayD testTwo(count);
        
        cout << "Enter up to: " << count << " numbers" << endl;
        double n = 0;
        
        while (!testTwo.full() && n >=0){
            cout << "input: ";
            cin >> n;
            testTwo.addElement(n);
        }
        
        cout << "The following data was inputted successully" << endl;
        for(int i = 0; i < testTwo.getNumberUsed(); i++ ){
            cout << testTwo[i] << endl;
        }
        
        testTwo = sample;
        cout << "Now lets check overloaded assignment" << endl;
        for(int i = 0; i < testTwo.getNumberUsed(); i++ ){
            cout << testTwo[i] << endl;
        }
        
        
	return 0;
}

