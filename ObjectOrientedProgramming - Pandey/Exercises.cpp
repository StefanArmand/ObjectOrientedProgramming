//Write a program to return more than one value from function using reference variable

#include "pch.h"
#include <iostream>

using namespace std;

int func(int x, int *y, int *z);

int main()
{
	int x = 0;
	int y = 0;
	int z = 0;
	cout << "Please write a value " << endl;
	cin >> x;

	func(x, &y, &z);

	cout << "The value " << x <<" is changed into: " << y << " and into : " << z << endl;
}

int func(int x, int *y, int *z) {
	*y = x * 2;
	*z = x * 3;
	return 0;
}