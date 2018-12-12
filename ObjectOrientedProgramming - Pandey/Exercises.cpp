// Write a program to declare two classes Eur and Dollar. Declare objects of both the classes and perform conversion between Rupees and Dollar using any of the conversion method.
#include "pch.h"
#include <iostream>

using namespace std;
class Eur
{
	double sum;
public:
	Eur(int x)
	{
		sum = x* 1.13;
		show();
	}

	void show()
	{
		cout << "Eur to dollars = " << sum << endl;
	}
};
class USD
{
	double sum;
public:
	USD(int x)
	{
		sum = x * 0.88;
		show();
	}

	void show()
	{
		cout << "USD to euro = " << sum << endl;
	}
};
int main()
{
	int num;
	cout << "Enter the num" << endl;
	cin >> num;
	Eur d = num;
	USD d1 = num;
}