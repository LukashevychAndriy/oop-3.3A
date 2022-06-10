#pragma once
#include "Complex.h"

class PubComplex: public Complex
{
public:
	PubComplex(double x = 0, double y = 0) : Complex(x, y) {}
	PubComplex(const PubComplex const& pc);

	PubComplex& operator = (const PubComplex&);

	PubComplex operator ++();
	PubComplex operator --();
	PubComplex operator ++(int);
	PubComplex operator --(int);
};
