#include "PrivComplex.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

PrivComplex::PrivComplex(const PrivComplex& pñ)
{
	*this = pñ;
}

PrivComplex& PrivComplex::operator = (const PrivComplex& r)
{
	setFirst(r.getFirst());
	setSecond(r.getSecond());
	return *this;
}

PrivComplex PrivComplex::operator ++()
{
	setFirst(getFirst() + 1);
	return *this;
}

PrivComplex PrivComplex::operator --()
{
	setFirst(getFirst() - 1);;
	return *this;
}

PrivComplex PrivComplex::operator ++(int)
{
	PrivComplex t(*this);
	setSecond(getSecond() + 1);
	return t;
}

PrivComplex PrivComplex::operator --(int)
{
	PrivComplex t(*this);
	setSecond(getSecond() - 1);
	return t;
}

PrivComplex::operator string () const
{
	stringstream ss;

	ss << " x = " << getFirst() << endl;
	ss << " y = " << getSecond() << endl;

	return ss.str();
}

ostream& operator << (ostream& out, const PrivComplex& f)
{
	out << string(f);
	return out;
}

istream& operator >> (istream& in, PrivComplex& f)
{
	double x, y;
	cout << " x = "; in >> x;
	cout << " y = "; in >> y;
	f.setFirst(x);
	f.setSecond(y);
	return in;
}

Complex operator - (const PrivComplex& pr1, const PrivComplex& pr2)
{
	Complex first = (const Complex&)pr1;
	Complex second = (const Complex&)pr2;
	double newComplexX = first.getFirst() - second.getSecond();
	double newComplexY = first.getFirst() - second.getSecond();

	Complex newComplex(newComplexX, newComplexY);

	return newComplex;
}

Complex operator / (const PrivComplex& pr1, const PrivComplex& pr2)
{
	Complex first = (const Complex&)pr1;
	Complex second = (const Complex&)pr2;

	double firstX = first.getFirst();
	double firstY = first.getSecond();
	double secondX = second.getFirst();
	double secondY = second.getSecond();

	double newComplexX = (firstX * secondX + firstY * secondY) / (secondX * secondX + secondY * secondY);
	double newComplexY = (secondX * firstY - firstX * secondY) / (secondX * secondX + secondY * secondY);

	Complex newComplex(newComplexX, newComplexY);

	return newComplex;
}

Complex conj(PrivComplex& pc)
{
	Complex c = (Complex&)pc;
	double newComplexX = c.getFirst();
	double newComplexY = -c.getSecond();

	Complex newComplex(newComplexX, newComplexY);

	return newComplex;
}
