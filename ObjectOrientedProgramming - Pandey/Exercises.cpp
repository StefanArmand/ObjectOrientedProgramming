//Write a C++ program to find the area and perimeter of a circle using pointers

#include "pch.h"
#include <iostream>

using namespace std;

int AreaPerim(int r, double *area, double *perimeter) {
	*area = 3.14 * r * r;
	*perimeter = 2 * 3.14* r;
	return 0;
}

int main()
{
	double area = 0;
	double perimeter = 0;
	int r = 5;

	AreaPerim(r, &area, &perimeter);
	cout << "The area of the circle is: " << area << " and the perimeter is: " << perimeter << endl;
}
