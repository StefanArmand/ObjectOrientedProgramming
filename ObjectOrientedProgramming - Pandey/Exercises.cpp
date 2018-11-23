//Write a function to find power of a given number like pow ( ) function.

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int power(int base, int exponent) {
	int res = 1;
	for (int i = 0; i < exponent; i++) {
		int temp = res * base;
		res = temp;
	}
	return res;
}

int main()
{

	int base = 0;
	int exponent = 0;
	cout << "Enter the number to be raised " << endl;
	cin >> base;
	cout << "To what power? " << endl;
	cin >> exponent;

	cout<< "The result is: " << power(base, exponent) << endl;
	
}
