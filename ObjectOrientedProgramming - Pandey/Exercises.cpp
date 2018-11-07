//Write a program that will read the values of x and evaluate the following function
// 1 for x > 0
// y = 0 for x = 0
// -1 for x < 0

#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	int x = 0;
	int result = 0;
	cout << "Write the x value: \n";
	cin >> x;

	if (x < 0) {
		result = -1;
	}
	else if (x == 0) {
		result = 0;
	}
	else if (x > 0){
		result = 1;
	}

	cout << "The result is " << result << endl;
}
