//Imagine a publishing company that markets both book and audiocassette versions of its works. Create a class publication that stores the title(a string) and price(type float) of publication.From
// this class derive two classes : book, which adds a page count(type int); and tape, which adds a playing time in minutes(type float).Each of these three classes should have a getdata() function
// to get its data from the user at the keyboard and a putdata() function to display its data. Write a main() program to test the book and tape classes by creating instance of them, asking the
// user to fill in data with getdata() and then displaying data with putdata().

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;
class publication
{
protected:
	string title;
	float price;
public:
	void getdata() {
		cout << "Write the title: " << endl;
		cin >> title;
		cout << "Write the price: " << endl;
		cin >> price;
	}

	void putdata() {
		cout << "The title is: " << title << "\nThe price is: " << price << endl;
	}

};
class book : public publication
{
protected:
	int pagecount;
public:
	void getdata() {
		publication::getdata();
		cout << "Write the number of pages: " << endl;
		cin >> pagecount;
	}

	void putdata() {
		publication::putdata();
		cout << "The number of pages is: " << pagecount << endl;
	}
};
class tape : public publication
{
protected:
	float playingtime;
public:
	void getdata() {
		publication::getdata();
		cout << "Write the playing time in minutes: " << endl;
		cin >> playingtime;
	}

	void putdata() {
		publication::putdata();
		cout << "The  playing time in minutes is: " << playingtime << endl;
	}
};


int main()
{
	book b1;
	tape t1;
	b1.getdata();
	b1.putdata();
	t1.getdata();
	t1.putdata();
}