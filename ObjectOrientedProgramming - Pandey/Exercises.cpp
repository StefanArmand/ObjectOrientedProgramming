//Write a program to display number all alphabets (upper and lowew) along with their ASCII values

#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	char c = 'a';
	char c2 = 'z';
	while (c <= c2) {
		cout << "For character: " << c << " the ASCII is " << int(c) << endl;
		c++;
	}
}