// programming exercises
// Write a program to enter a number (<100 and >15). Display the number in reverse order using % and / operator.

#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	int n = 0;
	int lastDigit = 0;
	int reverse = 0;
	cout << "Enter a number larger than 15 and smaller than 100: \n";
	cin >> n;
	while (n > 0) {
		lastDigit = n % 10;
		reverse = (reverse * 10) + lastDigit;
		n = n / 10;
	}
	cout << "Reverse is: " << reverse << endl;
}