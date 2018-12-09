//Define a class called time that has separate int data members for hours, minutes and seconds.One constructor should initialize these data to 0 and another should initialize them to fixed values.
//Write a member function to display time in the format 12 :28 : 34. Another member function should add two objects of type time passed as arguments.

#include "pch.h"
#include <iostream>

using namespace std;

class time {
	int sec, min, hours;

public:
	time() {
		sec = min = hours = 0;
	}
	time(int s, int m, int h) {
		sec = s;
		min = m;
		hours = h;
	}

	void show() {
		cout << "The times is: " << hours << " : " << min << " : " << sec << endl;
	}

	friend time addtime(time, time);
};

time addtime(time A, time B) {
	time temp;
	temp.hours = A.hours + B.hours;
	temp.min = A.min + B.min;
	temp.sec = A.sec + B.sec;
	return temp;
}

using namespace std;
int main()
{
	time d1(31, 15, 3);
	time d2(15, 10, 5);
	addtime(d1, d2).show();
}