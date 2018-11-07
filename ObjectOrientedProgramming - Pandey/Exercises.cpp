//Dinner for six guests, but your table has 4 places. 6 * 5 * 4 * 3 = 360.  Show number of arrangements posible for any number of guests or chairs

#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	int nguests = 0;
	int nchairs = 0;
	double total = 1;
	cout << "Write the number of guests: \n";
	cin >> nguests;
	cout << "Write the number of chairs: \n";
	cin >> nchairs;

	for (int i = 0; i < nchairs; i++) {	
		total *= nguests;
		nguests--;
	}

	cout << "The total of arangements possible is " << total << endl;
}
