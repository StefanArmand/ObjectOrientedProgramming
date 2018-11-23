//Write a program using function to round up and round down the floating point number.

#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

int roundfloat(float fl){
	int res = fl;
	float remainder = trunc(fl);
	float decimal = fl - remainder;
	if (decimal <= 0.5f) {
		return res;
	}
	if (decimal > 0.5f) {
		return res + 1;
	}
}

int main()
{

	float fl = 0.0f;
	
	cout << "Enter the float to modify into integer: " << endl;
	cin >> fl;

	cout<< "The result integer of the float is: " << roundfloat(fl) << endl;
	
}
