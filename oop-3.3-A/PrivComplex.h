#pragma once
#include "Complex.h"
#include <iostream>
#include <string>

using namespace std;

class PrivComplex: private Complex
{
public:
	PrivComplex(double x = 0, double y = 0) : Complex(x, y) {}
	PrivComplex(const PrivComplex const& pc);

	PrivComplex& operator = (const PrivComplex&);

	friend Complex operator / (const PrivComplex& pc1, const PrivComplex& pc2);
	friend Complex operator - (const PrivComplex& pc1, const PrivComplex& pc2);

	PrivComplex operator ++();
	PrivComplex operator --();
	PrivComplex operator ++(int);
	PrivComplex operator --(int);

	operator string() const;
	friend ostream& operator << (ostream&, const PrivComplex&);
	friend istream& operator >> (istream&, PrivComplex&);
};

