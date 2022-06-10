#include "Complex.h"
#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

Complex::Complex()
{
	first = 0;
	second = 0;
}

Complex::Complex(double x = 0, double y = 0)
{
	first = x;
	second = y;
}

Complex::Complex(const Complex& r)
{
	first = r.first;
	second = r.second;
}

Complex::operator string () const
{
	stringstream ss;

	ss << " x = " << first << endl;
	ss << " y = " << second << endl;

	return ss.str();
}

ostream& operator << (ostream& out, const Complex& f)
{
	out << string(f);
	return out;
}

istream& operator >> (istream& in, Complex& f)
{
	cout << " x = "; in >> f.first;
	cout << " y = "; in >> f.second;
	return in;
}

Complex operator - (const Complex& first, const Complex& second)
{
	double newComplexX = first.getFirst() - second.getSecond();
	double newComplexY = first.getFirst() - second.getSecond();

	Complex newComplex(newComplexX, newComplexY);

	return newComplex;
}

Complex operator / (const Complex& first, const Complex& second)
{
	double firstX = first.getFirst();
	double firstY = first.getSecond();
	double secondX = second.getFirst();
	double secondY = second.getSecond();

	double newComplexX = (firstX * secondX + firstY * secondY) / (secondX * secondX + secondY * secondY);
	double newComplexY = (secondX * firstY - firstX * secondY) / (secondX * secondX + secondY * secondY);

	Complex newComplex(newComplexX, newComplexY);

	return newComplex;
}

Complex conj(Complex& c)
{
	double newComplexX = c.getFirst();
	double newComplexY = -c.getSecond();

	Complex newComplex(newComplexX, newComplexY);

	return newComplex;
}
