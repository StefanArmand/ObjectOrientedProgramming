// Write C++ program to overload a function named power() to allow the calculation of power of both ‘int’ and ‘float’ value.

#include "pch.h"
#include <iostream>

using namespace std;
class power
{
	int pow;
public:
	power(int x)
	{
		pow = x*x;
		show();
	}

	power(float x) {
		pow = x * x;
		show();
	}

	void show()
	{
		cout << "squared = " << pow << endl;
	}
};
void main()
{
	float num;
	cout << "Enter the num" << endl;
	cin >> num;
	power d = num;
}