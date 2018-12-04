// Define a class fract whose object represent rational numbers (i.e., fractions). Inside integer data members numr and denr for storing a numerator and a denominator respectively.Provide a
// constructor and member function eval_fract() for evaluating the value of the rational number, invert() for inverting the rational number, print() for printing the rational number in the form
// numr / denr(for example, 22 / 7).Also provide access functions get_numr and get_denr for returning the values of the private data members.Include a member function reduce_fract(), that reduces
// the fraction numr / denr to lowest term.For example, the fraction 54 / 90 is stored as the object 3 / 5. Invoke these member functions in the main() module to test them with suitable data.

#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

class fract
{

	int numr = 0; // numerator
	int denr = 0; // denominator

public:

	void get_numr(int n) {
		numr = n;
	}

	void get_denr(int d) {
		denr = d;
	}

	float eval_fract() {
		float x = (float)numr / (float)denr;
		return x;
	}

	void invert() {
		int temp = denr;
		denr = numr;
		numr = temp;

		cout << "The inverted is: " << numr << " / " << denr << endl;
	}

	void print() {
		cout << " The fractal is: : " << numr << " / " << denr << endl;
	}

	void reduce_fract() {
		int numrt = numr;
		int denrt = denr;
		while (1) {
			if (numrt % 2 == 0 && denrt % 2 == 0) {
				numrt = numrt / 2;
				denrt = denrt / 2;
				continue;
			}
			else if (numrt % 3 == 0 && denrt % 3 == 0) {
				numrt = numrt / 3;
				denrt = denrt / 3;
				continue;
			}
			else if (numrt % 5 == 0 && denrt % 5 == 0) {
				numrt = numrt / 5;
				denrt = denrt / 5;
				continue;
			}
			else if (numrt % 7 == 0 && denrt % 7 == 0) {
				numrt = numrt / 7;
				denrt = denrt / 7;
				continue;
			}
			else {
				break;
			}
		}
		cout << " The fractal to the lowest term is: : " << numrt << " / " << denrt << endl;
	}

};

void main()
{
	fract f;
	f.get_numr(36);
	f.get_denr(68);

	f.print();
	cout << "The fractal evaluated is: " << f.eval_fract() << endl;
	f.invert();

	f.reduce_fract();


}