//Write a program to complement the bits starting from R and ending at S, of a given number and print the value of the manipulated number in binary, octal and hexadecimal form.

#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	char c = 'R';
	//char s = 'S';

	unsigned short y = 0;

	while (c <= 'S') {
		y = ~c;
		cout << "The complement number of "<< c << " in binary is: " << y << endl;
		cout << "The complement number of " << c << " in octal is: " << oct << y << endl;
		cout << "The complement number of " << c << " in hexadecimal is: " << hex << y << endl;
		c++;
	}
}