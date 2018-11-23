//Write a program to find kth element into an array of strings i.e. string whose length is maximum

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
	const char* strlist[4] = { "first", "frist", "jimcond", "third" };
	char c = ' ';
	cout << "Enter the character to be compared: " << endl;
	cin >> c;

	for (int i = 0; i < 4; i++) {
		int max = 0;
		max = strlen(strlist[i]);
		for (int j = 0; j < max; j++) {
			if (c == strlist[i][j]) {
				cout << "Char found in " << strlist[i] << " and its the " << max << "th element\n";
			}
		}
	}
}
