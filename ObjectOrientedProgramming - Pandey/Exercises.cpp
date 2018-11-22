//Write a program to accept a float number through the keyboard. Calculate the square of the
//number.Separate the float number into integer and fractional part.Individually calculate the
//square of an integer and fractional part and add them in another variable.Compare the two
//squares obtained.

#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float fl = 0.0f;
	float sqfl = 0.0f;
	double sqfract = 0;
	int sqint = 0;
	int intfl = 0;
	double fractpart;
	double intpart;
	double sqtotal = 0;

	cout << "Please enter a float: " << endl;
	cin >> fl;

	sqfl = fl * fl;

	fractpart = modf(fl, &intpart);

	sqfract = fractpart * fractpart;
	sqint = intpart * intpart;
	sqtotal = sqfract + sqint;


	cout << "The square of the float is: " << sqfl << " and the square of the fractpart + intpart is: " << sqtotal << endl;
}
