// Write a program to allocate memory for 10 string using new and display them

#include "pch.h"
#include <iostream>

using namespace std;
void main()
{
	int n;
	int numb = 0;
	while (numb < 10) {
		cout << "Enter the length of the string number " << numb << "\n";
		cin >> n;
		char *str = new char[n + 1];
		cout << "Enter the string\n";
		cin >> str;
		cout << "Hello " << str << endl;
		delete str;
		numb++;
	}

}