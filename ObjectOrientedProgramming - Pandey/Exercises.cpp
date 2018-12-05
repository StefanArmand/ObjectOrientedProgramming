// Create a class time that has separate int member data for hours, minutes and seconds. One constructor should initialize this data to 0, and another should initialize it to fixed values.Another
// member function should display it, in 11:59 : 59 format.The final member function should add two objects of type time passed as arguments.
// A main program should create two initialized time objects(should they be const ? ) and one that is not initialized.Then it should add the two initialized values together, leaving the result in the third time variable.Finally, it should display the value of this third variable.Make appropriate
// member functions const.

#include "pch.h"
#include <iostream>

using namespace std;

class Time
{

	int hours;
	int minutes;
	int secs;


public:

	void initializetozero() {
		hours = 0;
		minutes = 0;
		secs = 0;
	}
	void input_time(int hh, int mm, int ss)
	{
		hours = hh;
		minutes = mm;
		secs = ss;
	}
	
	void show_time(Time t)
	{
		cout << t.hours << " : " << t.minutes
			<< "\t" << " : " << t.secs << endl;
	}


	Time sum_time(Time A, Time B)
	{
		int h, m, s;
		Time temp;
		s = A.secs + B.secs;
		m = A.minutes + B.minutes + s / 60;
		h = A.hours + B.hours + m / 60;
		temp.secs = s % 60;
		temp.minutes = m % 60;
		temp.hours = h;
		return temp;
	}
};

int main()
{
	Time t1, t2, t3;
	t1.initializetozero();
	t2.input_time(13, 45, 22);
	t3.input_time(5, 21, 11);
	t1.sum_time(t2, t3);
	t1.show_time(t1.sum_time(t2, t3));
}