//Create a class Country, State, City and Village and arrange them in hierarchical manner.

#include "pch.h"
#include <iostream>

using namespace std;
class Country
{
public:
	void country_show()
	{
		cout << "Hello from Country" << endl;
	}
};
class State :public Country
{
public:
	void state_show()
	{
		country_show();
		cout << "Hello from State" << endl;
	}
};
class City : public State
{
public:
	void city_show()
	{
		state_show();
		cout << "Hello from City" << endl;
	}
};
class Village : public City
{
public:
	void village_show()
	{
		city_show();
		cout << "Hello from Village" << endl;
	}
};

void main()
{
	Village o1;
	o1.village_show();
}