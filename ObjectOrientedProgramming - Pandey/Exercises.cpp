// Write a function called swap() that interchanges two int values passed to it by the calling program. (Note that this function swaps the values of the variables in the calling program, not
//	those in the function) You will need to decide how to pass the arguments.Create a main() program to exercise the function.

#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

int swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
	return 0;
}

int main()
{
	int a = 0;
	int b = 0;
	
	cout << "Enter the first int to swap: " << endl;
	cin >> a;
	cout << "Enter the second int to swap: " << endl;
	cin >> b;

	cout << "Before the swap the numbers are: " << a << " and " << b << endl;

	swap(a, b);

	cout<< "The result of the swap is: " << a << " and " << b << endl;
	
}
