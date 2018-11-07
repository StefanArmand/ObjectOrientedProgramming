//Write a program to find out largest of 10 numbers using if and goto only
#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	int n[10] = {32, 42, 32, 12, 32, 21, 11, 27, 32, 42};
	int largest = 0;
	bool first = true;

	/*cout << "Enter 10 numbers: \n";
	for (int i = 0; i < 10; i++) {
		cin >> n[i];
	}*/

	int c = 0;
	while (c < 10) {
		if (first) {
			first = false;
			c++;
			continue;
		}
		if (largest != 0) {
			goto complargest;
		}
		if (n[c + 1] > n[c]) {
			largest = n[c + 1];
			c++;
			continue;
		}
		else {
			largest = n[c];
			c++;
			continue;
		}

	complargest:
		if (largest > n[c]) {
			c++;
			continue;
		}
		else {
			largest = n[c];
			c++;
			continue;
		}
	}

	cout << "Largest number is: " << largest << endl;
}
