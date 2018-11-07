//Write a program to check whether a triangle can be formed with three positive integers supplied

#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	int s1 = 0;
	int s2 = 0;
	int s3 = 0;

	cout << "Enter the first side: \n";
	cin >> s1;

	cout << "Enter the second side: \n";
	cin >> s2;

	cout << "Enter the third side: \n";
	cin >> s3;

	
	if (s1 + s2 <= s3) {
		cout << "The triangle can't be formed \n";
	}
	else if (s1 + s3 <= s2) {
		cout << "The triangle can't be formed \n";
	}
	else if (s2 + s3 <= s1) {
		cout << "The triangle can't be formed \n";
	}
	else {
		cout << "The triangle can be formed \n";
	}	
}
