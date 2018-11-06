//Write a program to enter two numbers and find the smallest of them. Use conditional operator.

#include "pch.h"
#include <iostream>
#include <bitset>

using namespace std;
int main()
{
	int a = 0;
	int b = 0;
	int result = 0;
	
	cout << "Enter the first number: \n";
	cin >> a;
	cout << "Enter the second number: \n";
	cin >> b;

	result = (a < b) ? 1 : 0;

	if (result == 1) {
		cout << "The number " << a << " smaller than " << b << endl;
	}
	else {
		cout << "The number " << b << " smaller than " << a << endl;
	}
}
