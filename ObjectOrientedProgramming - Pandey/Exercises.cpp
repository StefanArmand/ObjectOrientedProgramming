//Write a program to calculate the bill of Internet Browsing. The conditions are given below:
// 1 hour - 20$
// 1/2 hours - 15$
// 5 hours - 90$

#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	float n = 0;
	float totaltopay = 0;
	cout << "Write the number of hours: \n";
	cin >> n;

	if (n <= 1.0f && n > 0.5f || n > 0.5f && n < 5.0f) {
		totaltopay = 20 * n;
	}
	else if (n <= 0.5f) {
		totaltopay = 30 * n;
	}
	else if (n == 5) {
		totaltopay = 90;
	}

	cout << "The total to pay is " << totaltopay << endl;
}
