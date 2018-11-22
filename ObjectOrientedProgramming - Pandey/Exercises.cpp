//Write a C++ program to arrange a list of names in ascending order using an array of pointers to strings.

#include "pch.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

bool wayToSort(string i, string j) { return i < j; }

int main()
{
	vector<string> str = { "John", "Tommy", "Victor", "Claire"};


	sort(str.begin(), str.end(), wayToSort);
	cout << "Sorted strings look like this: " << endl;
	for (string i : str) {
		cout << i << " " << endl;
	}
}
