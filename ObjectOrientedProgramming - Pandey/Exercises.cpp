// Programming exercises
// Write a program to convert entered temperature from celsius to fahrenheit
// Formula is (0°C × 9 / 5) + 32 = 32°F

#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	float c = 0;
	float fahr = 0;
	cout << "Enter the temperature in Celsius: \n";
	cin >> c;
	fahr = (c * 9 / 5) + 32;
	cout << "The temperature in Fahrenheit is: " << fahr << endl;
}