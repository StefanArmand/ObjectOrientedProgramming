//Write a program to shift a number 4 bits by storing bits to another number. The program should print out the values of the number formed by shfted bits, in decimal and binary forms

#include "pch.h"
#include <iostream>
#include <bitset>

using namespace std;
int main()
{
	int a = 0;
	int b = 0;
	
	cout << "Enter the binary number: \n";
	cin >> a;

	b = a << 4;

	cout << "The number " << b << " in binary form is " << std::bitset<8>(b) << endl;
}
