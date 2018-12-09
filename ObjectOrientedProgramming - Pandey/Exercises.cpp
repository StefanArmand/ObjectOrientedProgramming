// Define a class of square matrix N ×N of integers.Define the necessary constructor / destructor and other members.Write a program to find the trace(sum of diagonal elements) of a matrix.

#include "pch.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

class matrix
{
	int **ptr;
	int row, col;
public:
	matrix(int r, int c);
	void input();
	void show();
	int diag_sum(int r, int c);
};

matrix :: matrix(int r, int c)
{
	row = r; col = c;
	ptr = new int *[row];
	for (int i = 0; i < row; i++)
		ptr[i] = new int[col];
}
void matrix :: input()
	{
		int i, j;
		for (i = 0; i < row; i++)
			for (j = 0; j < col; j++)
			{
				cout << "\nEnter ptr[" << i << "][" << j << "] element :";
				cin >> ptr[i][j];
			}
		}
void matrix :: show()
	{
		int i, j;
		cout << "\n Matrix is \n";
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
				cout << ptr[i][j] << "\t";
			cout << endl;
		}
	}
int matrix :: diag_sum(int r, int c)
{
	r = row;
	c = col;
	int i, j, sum = 0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
			if (i == j)
				sum += ptr[i][j];
	}
	return sum;
}

void main()
	{
		matrix m(3, 3);
		m.input();
		m.show();
		cout << "The sum of the diagonal is: " << m.diag_sum(3, 3) << endl;
	}