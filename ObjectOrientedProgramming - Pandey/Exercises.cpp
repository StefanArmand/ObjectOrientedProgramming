//Define a class named Queue for holding ints and providing function for inserting items at one end and removing items from other end of a queue data structure to be supported by this class.Include
// a default constructor, a destructor and the usual queue operations : insert(), remove(), isempty (), and isfull().Use array implementation.

#include "pch.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>

#define S 5

using namespace std;

class queue
{
	int front;
	int rear;
	int que[S];
public:
	queue()
	{
		front = rear = -1;
	}
	void insert(int item)
	{
		if (rear == S-1)
		{
			cout << "QUEUE IS FULL" << endl;
			exit(0);
		}
		if (front == -1)
			front = 0;
		que[++rear] = item;
		cout << "ITEM INSERTED" << endl;
	}
	int remove()
	{
		int item;
		if (front == -1)
		{
			cout << "QUEUE IS EMPTY " << endl;
			exit(0);
		}
		item = que[front];
		if (front == rear)
			front = rear = -1;
		else
			front++;
		return item;
	}
	~queue() {
	}
};
void main()
{
	queue s;
	int choice, item;
	do
	{
		cout << "QUEUW DEMO" << endl;
		cout << "1 : INSERT(REAR OPERATION)" << endl;
		cout << "2 : DELETE(FRONT OPERATION)" << endl;
		cout << "3 : QUIT" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:cout << "ENTER THE ITEM" << endl;
			cin >> item;
			s.insert(item);
			break;
		case 2: item = s.remove();
			cout << "ITEM DELETED : = " << item << endl;
			break;
		case 3: cout << "HAVE A NICE DAY, GOOD BYE" << endl;
			exit(0);
			break;
		default: cout << "WRONG CHOICE!ERROR......." << endl;
		}
	} while (choice >= 1 && choice <= 3);
}