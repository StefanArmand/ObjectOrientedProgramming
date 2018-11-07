//Write a program to check whether a voter is eligible for voting or not? If his/her age is equal to or greater than 18 display "Eligible" else display "Not eligible"

#include "pch.h"
#include <iostream>
#include <bitset>

using namespace std;
int main()
{
	int age = 0;
	
	cout << "Enter the age of the voter: \n";
	cin >> age;

	if (age < 18) {
		cout << "The voter is eligible \n";
	}
	else {
		cout << "The voter is not eligible \n";
	}

	
}
