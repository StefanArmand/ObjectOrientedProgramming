//Write a program to shift the entered number by three bits left and display the result

#include "pch.h"
#include <iostream>
#include <bitset>

using namespace std;
int main()
{
	int a = 0;
	int shifted = 0;
	cout << "Enter the number: \n";
	cin >> a;

	shifted = a << 3;

		cout << "The number " << a << " shifted left by three is " << shifted << endl;
}
