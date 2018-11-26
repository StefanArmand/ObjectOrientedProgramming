// Write a function called zeroSmaller( ) that is passed two int arguments by reference and then sets the smaller of the two numbers to 0. Write a main() program to exercise this function.

#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

int a = 0;

int zeroSmaller(int* n, int* p) {
	if (*n < *p) {
		*n = 0;
	}
	else if (*p < *n) {
		*p = 0;
	}
	return 0;
}

int main()
{
	int a, b;
	cout << "Please enter the first number:\n";
	cin >> a;
	cout << "Please enter the second number:\n";
	cin >> b;
	
	zeroSmaller(&a, &b);

	cout << "The smaller number is now zero: " << a << "    " << b << endl;
}
