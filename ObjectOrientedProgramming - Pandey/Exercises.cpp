//Write a program to calculate the amount of the bill for the following jobs
// a. Scanning and hardcopy of a passport photo 5$
// b. Scanning and hardcopies (more than 10) 3$

#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	int n = 0;
	int totaltopay = 0;
	cout << "Write the number of passports: \n";
	cin >> n;

	if (n < 10 && n > 0 ) {
		totaltopay  = n*5;
	}
	else if (n >= 10) {
		totaltopay = n*3;
	}
	else if (n <= 0){
		cout << "n must be positive" << endl;
	}

	cout << "The total to pay is " << totaltopay << endl;
}
