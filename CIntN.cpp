#include "CIntN.hpp"

CIntN::CIntN()//конструктор по умолчанию
{
	int t = 0;
	while (t < N)
	{
		value[t] = 3;
		t++;
	}
}
CIntN::CIntN(const unsigned int v)//конструктор
{
	if (N != num_digits(v)|| v<0)
		throw - 1;

	int t = v, s = N-1;
	while (s >= 0)
	{
		value[s] = t % 10;
		t = t / 10;
		s--;
	}
}

CIntN CIntN::operator+( CIntN other)
{
	int V = this->Value() + other.Value();
	if (num_digits(other.Value()) != N || other.Value() < 0 || num_digits( V ) !=N || V<0)
		throw -1;

	CIntN Vv(V);
	return Vv;
}
CIntN CIntN::operator-( CIntN other)
{
	int V = this->Value() - other.Value();
	if (num_digits(other.Value()) != N || other.Value() < 0 || num_digits(V) != N || V < 0)
		throw - 1;

	CIntN Vv(V);
	return Vv;
}

int CIntN::Value()
{
	int Val;
	for (int i = 0; i < N; i++)
	{
		if (i == 0)
			Val = value[0];
		else
		{
			Val = Val * 10 + value[i];
		}
	}
	return Val;
}

int num_digits(int val)//сколько цифр в числе
{
	int t = val, s=0;
	while (t > 0)
	{
		t=t/10;
		s++;
	}
	return s;
}
