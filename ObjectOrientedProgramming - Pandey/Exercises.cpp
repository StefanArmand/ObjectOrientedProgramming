//Write a program to declare classes A, B and C. Each class contains one char array as a data member.Apply multiple inheritances.Concatenate strings of class A and B and store it in class C.

#include "pch.h"
#include <iostream>
#include <string.h>
using namespace std;
class A
{
protected:
	char astr[40] = "stringfromA";
};
class B
{
protected:
	char bstr[20] = "stringfromB";
};
class C : public A, public B
{
public:
	void concatanete_string()
	{
		strcat_s(astr, bstr);
		cout << "These are the strings concatenated: " << astr << endl;
	}
};


int main()
{
	C o1;
	o1.concatanete_string();
}