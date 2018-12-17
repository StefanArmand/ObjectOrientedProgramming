//Declare a class Vehicle. From this class derived two_wheeler, three_wheeler and four_wheeler class.Display properties of each type of vehicle using member function of the class.

#include "pch.h"
#include <iostream>

using namespace std;
class Vehicle
{

};
class two_wheeler :public Vehicle
{
public:
	void twowheel_show()
	{
		cout << "This is a two wheeler" << endl;
	}
};
class three_wheeler : public Vehicle
{
public:
	void threewheel_show()
	{
		cout << "This is a three wheeler" << endl;
	}
};
class four_wheeler : public Vehicle
{
public:
	void fourwheel_show()
	{
		cout << "This is a four wheeler" << endl;
	}
};

void main()
{
	two_wheeler o1;
	o1.twowheel_show();
	three_wheeler o2;
	o2.threewheel_show();
	four_wheeler o3;
	o3.fourwheel_show();
}