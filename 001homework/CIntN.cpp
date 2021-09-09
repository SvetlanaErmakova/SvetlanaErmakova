#include "CIntN.hpp"

CIntN::CIntN()//конструктор по умолчанию
{
	unsigned int t = 1, val=3;
	while (t < N)
	{
		val *= 10;
		val += 3;
		t++;
	}
	value = val;
}
CIntN::CIntN(const unsigned int value)//конструктор
{
	int t = value, s = 0;
	while (t > 0)
	{
		t = t / 10;
		s++;
	}

	if (s != N||value<0)
		throw -1;

	this->value = value;
}

CIntN CIntN::operator+( CIntN other)
{
	if (other.num_digits() != N || other.value<0)
		throw -1;

	CIntN Vv = CIntN(value + other.value);

	if (Vv.num_digits() != N || Vv.value < 0)
		throw - 1;
	return Vv;
}
CIntN CIntN::operator-( CIntN other)
{
	if (other.num_digits() != N || other.value < 0)
		throw -1;

	CIntN Vv = CIntN(value - other.value);

	if (Vv.num_digits() != N || Vv.value < 0)
		throw -1;

	return Vv;
}

int  CIntN::Value()
{
	return value;
}

int CIntN::num_digits()//сколько цифр в числе
{
	int t = value, s=0;
	while (t > 0)
	{
		t=t/10;
		s++;
	}
	return s;
}
