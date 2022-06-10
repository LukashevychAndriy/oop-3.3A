#include "PubComplex.h"

PubComplex::PubComplex(const PubComplex& pñ)
{
	*this = pñ;
}

PubComplex& PubComplex::operator = (const PubComplex& r)
{
	setFirst(r.getFirst());
	setSecond(r.getSecond());
	return *this;
}

PubComplex PubComplex::operator ++()
{
	setFirst(getFirst() + 1);
	return *this;
}

PubComplex PubComplex::operator --()
{
	setFirst(getFirst() - 1);;
	return *this;
}

PubComplex PubComplex::operator ++(int)
{
	PubComplex t(*this);
	setSecond(getSecond() + 1);
	return t;
}

PubComplex PubComplex::operator --(int)
{
	PubComplex t(*this);
	setSecond(getSecond() - 1);
	return t;
}
