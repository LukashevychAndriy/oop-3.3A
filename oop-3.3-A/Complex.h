#pragma once
#include <iostream>

using namespace std;

class Complex
{
private:
	double first, second;
public:
	Complex();
	Complex(double, double);
	Complex(const Complex&);

	double getFirst() const { return first; }
	double getSecond() const { return second; }
	void setFirst(double num) { first = num; }
	void setSecond(double num) { second = num; }

	friend Complex operator - (const Complex&, const Complex&);
	friend Complex operator / (const Complex&, const Complex&);
	friend Complex conj(Complex&);

	operator string() const;
	friend ostream& operator << (ostream&, const Complex&);
	friend istream& operator >> (istream&, Complex&);
};
