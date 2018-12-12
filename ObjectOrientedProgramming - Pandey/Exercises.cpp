// Write a program that substitutes an overloaded += operator for the overloaded + operator. This operator should allow statements like : s1 + = s2; 
// Where s2 is added(concatenated) to s1 and the result is left in s1.The operator should also permits the results of the operation to be used in other calculations, as in s3 = s1 + = s2;
#include "pch.h"
#include <iostream>
#include <math.h>

using namespace std;
class PlusEquals
{
	int num;
	static int count;
public:

	PlusEquals operator +(PlusEquals x) {
		PlusEquals t;
		t.num = num + x.num;
		return t;
	}

	void show()
	{
		cout << "The sum is = " << num << endl;
	}

	void input()
	{
		cout << " Enter the number for object" << ++count << endl;
		cin >> num;
	}

};

int PlusEquals::count;

int main()
{
	PlusEquals n1, n2, n3, n4;
	n1.input();
	n2.input();
	n3.input();
	n4 = n1 + n2 + n3;
	n4.show();
}