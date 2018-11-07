//Write a program to check whether a number is divisible by 2, 3, 4, 5 and 6
#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	int n = 0;
	int primecheck = 0;

	cout << "Enter the number: \n";
	cin >> n;

	
	if (n % 2 == 0) {
		cout << "The number is divisible by 2 \n";
		primecheck++;
	}
	if (n % 3 == 0) {
		cout << "The number is divisible by 3 \n";
		primecheck++;
	}
	if (n % 4 == 0) {
		cout << "The number is divisible by 4 \n";
		primecheck++;
	}
	if (n % 5 == 0) {
		cout << "The number is divisible by 5 \n";
		primecheck++;
	}
	if (n % 6 == 0) {
		cout << "The number is divisible by 6 \n";
		primecheck++;
	}
	if (primecheck == 0) {
		cout << "The number is prime \n";
	}
}
