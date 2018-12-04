// Write a function that takes two Distance (structure) value as arguments and returns the larger one.
//Include a main program that accepts two Distance values from the user, compare them and display the larger.

#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

struct Distance
{
	int dist1 = 0;
	int dist2 = 0;

	void input_data(int d1, int d2) {
		dist1 = d1;
		dist2 = d2;
	}

	int compare() {
		if (dist1 > dist2) {
			return dist1;
		}
		else {
			return dist2;
		}
	}
};

void main()
{
	Distance d;
	d.input_data(35, 45);

	cout << "The distances are: " << d.dist1 << " and " << d.dist2 << endl;

	cout << "The bigger distance is: " << d.compare() << endl;
}