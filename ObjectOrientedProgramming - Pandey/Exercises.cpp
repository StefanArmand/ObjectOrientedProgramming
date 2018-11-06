//Write a program to evaluate the expression 2x+3y - 10. Value for x and y should be taken from the user side

#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	int x = 0;
	int y = 0;
	int result = 0;
	cout << "Enter the x:\n";
	cin >> x;
	cout << "Enter the y:\n";
	cin >> y;
	
	result = 2 * x + 3 * y - 10;
	
	cout << "The result is: " << result << endl;

}