// Write a program to declare a class with two integers. Read values using member functions. Pass the object to another member function.Display the difference between them.

#include "pch.h"
#include <iostream>
#include <string.h>

using namespace std;

class first
{

	int a = 0; 
	int b = 0;


public:

	void input(int x, int y) {
		a = x;
		b = y;
	}

	int difference() {
		return a - b;
	}

	
};

int main()
{
	first a;
	a.input(15, 4);
	cout << "The difference between the numbers is: " << a.difference() << endl;


}