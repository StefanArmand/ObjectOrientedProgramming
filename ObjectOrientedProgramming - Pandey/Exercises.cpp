// Programming exercises
// Write a program to enter a four digit number and find out sum of its digit using % and / operator

#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	int num = 0, r;
	int sum = 0;

	cout << "Enter a four digit number \n";
	cin >> num;

		sum = 0;
		while (num!=0) {
			r = num % 10;
			sum = sum + r;
			num = num / 10;
		}

		cout << "Sum of digits is : " << sum << endl;
}