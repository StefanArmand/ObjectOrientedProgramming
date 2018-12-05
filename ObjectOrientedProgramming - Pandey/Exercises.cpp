// Create a class that includes a data member that holds a �serial number� for each object created from the class.That is, the first object created will be numbered 1, the second 2 and so on.
// To do this, you will need another data member that records a count of how many object have been created so far. (This member should apply to the class as a whole; not to individual objects.What
//	keyword specifies this ? ) Then, as each object is created, its constructor can examine this count 	member variable to determine the appropriate serial number for the new object.
//	Add a member function that permits an object to report its own serial number.Then write a main () program that creates three objects and quires each one about its serial number.They should
//	respond I am object number 2, and so on.

#include "pch.h"
#include <iostream>

using namespace std;

class Serial
{

	static int serNumb; 


public:

	void called() {
		serNumb++;
		cout << "I am object number " << serNumb << endl;
	}
	
};

int Serial::serNumb;

int main()
{
	Serial s1, s2, s3;
	s1.called();
	s2.called();
	s3.called();
}