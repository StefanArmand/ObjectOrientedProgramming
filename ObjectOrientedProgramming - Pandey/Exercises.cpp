// Assume that an object has a name being accessed by the pointer. Write a program using reference variable for interchanging the names of two objects.

#include "pch.h"
#include <iostream>
#include <string.h>

using namespace std;

class second;
class first
{

	char fname[10]; 

public:

	void input(char c[]) {
		strcpy_s(fname, c);
	}

	void show() {
		cout << " The first name is: : " << fname << endl;
	}

	friend void change(first&, second&);
};
class second {
	char sname[10];

public:

	void input(char c[]) {
		strcpy_s (sname, c);
	}

	void show() {
		cout << " The first name is: : " << sname << endl;
	}

	friend void change(first&, second&);
};

void change(first& A, second& B) {
	char temp[10];
	strcpy_s(temp, A.fname);
	strcpy_s(A.fname, B.sname);
	strcpy_s(B.sname, temp);
}

int main()
{
	first a;
	second b;
	a.input("George");
	b.input("Jimmy");
	cout << "Before sweapping : \n";


}