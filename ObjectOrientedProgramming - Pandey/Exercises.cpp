// Write a function that takes two Distance values as arguments and returns the larger one. Include a main() program that accepts two Distance values from the user, compares them, and displays
// the larger.

#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

int a = 0;

int compDistance(int n, int p) {
	if (n < p) {
		return p;
	}
	else if (p < n) {
		return n;
	}
}

int main()
{
	int a, b;
	cout << "Please enter the first distance:\n";
	cin >> a;
	cout << "Please enter the second distance:\n";
	cin >> b;

	cout << "The bigger distance is: " << compDistance(a, b) << endl;
}
