//Write a program to calculate the sum of remainders obtained by dividing with modular division operations by 2 on 1 to 9 numbers

#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	int n = 0;
	int sum = 0;
	//cout << "Write the number of hours: \n";
	//cin >> n;

	for (int i = 1; i < 10; i++) {
		int tmp = 0;
		tmp = i % 2;
		sum += tmp;
	}

	cout << "The total is " << sum << endl;
}
