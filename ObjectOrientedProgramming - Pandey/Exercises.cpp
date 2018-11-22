//Write a program to list all the strings whose initials starts with a given input character using function and pointer

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
		
		char firstlet = strlist[i][0];
		if (c == firstlet) {
			cout << strlist[i] << endl;
		}
	}
}
