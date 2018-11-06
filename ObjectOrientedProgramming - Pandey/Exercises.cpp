//Write a program to multiply two floating point numbers and print the product as a double in exponential notation

#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	double x = 0;
	double y = 0;
	double result = 0;
	double temp = 0;
	int exponent = 0;
	cout << "Enter the x:\n";
	cin >> x;
	cout << "Enter the y:\n";
	cin >> y;
	
	result = x * y;
	while (result > 1) {
		temp = result / 10;
		result = temp;
		exponent++;
	}

	if (exponent == 2) {
		cout << "The result is: " << result << " times e to the " << exponent << "'nd power" << endl;
	}
	else {
		cout << "The result is: " << result << " times e to the " << exponent << "'th power" << endl;
	}

}