// Create a class that imitates part of the functionality of the basic data type int. Call the class Int (not different spelling).The only data in this class is an int variable.Include member functions 
// to initialize an Int to 0, to initialize it to an int value, to display it(it looks just like an int), and to add two Int values.
// Write a program that exercise this class by creating two initialized and one uninitialized Int values, adding these two initialized values ad placing the response in the uninitalized value, and
// then displaying this result.

#include "pch.h"
#include <iostream>

using namespace std;

class Int
{

	int a = 0; 


public:

	void initialize() {
		a = 0;
	}

	int initializeValue(int x) {
		a = x;
		return a;
	}

	void display(int x) {
		a = x;
		cout << " The value is: " << a << endl;
	}

	int addints(int x, int y) {
		return x + y;
	}
	
};

int main()
{
	Int a;
	Int b;
	Int c;
	a.initialize();
	b.initializeValue(6);
	c.initializeValue(9);
	a.addints(b.initializeValue(6), c.initializeValue(9));
	a.display(a.addints(b.initializeValue(6), c.initializeValue(9)));
}