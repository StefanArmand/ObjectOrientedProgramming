//Write a program to print wheter entered number is even or odd using ternary operator

#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	int n = 0;
	bool ev = false;
	cout << "Enter the number:\n";
	cin >> n;
	
	ev = (n % 2 == 0) ? true : false;

	if (ev) {
		cout << "The number is even" << endl;
	}
	else {
		cout << "The number is odd" << endl;
	}
}