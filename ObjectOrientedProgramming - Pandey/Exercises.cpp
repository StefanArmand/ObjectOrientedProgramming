//Write a program to enter two numbers and do comparisons of them. If first one is greater than find out division of two numbers else find out multiplication of two numbers

#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	int n1 = 0, n2 = 0, res = 0;
	cout << "Enter the first number:\n";
	cin >> n1;
	cout << "Enter the second number:\n";
	cin >> n2;
	if (n1 > n2) {
		res = n1 / n2;
	}
	else {
		res = n1 * n2;
	}
	cout << "Result is " << res;
}