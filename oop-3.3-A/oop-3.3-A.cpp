#include <iostream>
#include "PubComplex.h"
#include "PrivComplex.h"

int main()
{
	PubComplex pr, p{ 1, 8 };
	cin >> pr;
	cout << pr / p << endl;
	cout << pr - p << endl;
	cout << endl;
	PrivComplex pr1, pr2{ 3, 5 };
	cin >> pr1;
	cout << pr1 / pr2 << endl;
	cout << pr1 - pr2 << endl;
	cout << endl;

	PubComplex a(2, 4);

	cout << "++a - " << ++a << endl;
	cout << "--a - " << --a << endl;
	cout << "a++ - " << a++ << endl;
	cout << "a-- - " << a-- << endl;
}
