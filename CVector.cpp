#include "CVector.hpp"
#include <iostream>
using namespace std;


CVector::CVector()//??????????? ?? ?????????
{
	size_ = 0;
	arr= NULL;
}

CVector::CVector(const size_t size)//???????????
{
	size_ = size;
	arr = (double*)malloc(size * sizeof(double));

	for (size_t i = 0; i < size; i++)
	{
		cout << "elt " << i<<": ";
		cin >> arr[i];
	}
}

CVector::CVector(const CVector& other)//??????????? ???????????
{
	size_ = other.get_size();
	arr = new double[size_];
	for (size_t i = 0; i < size_; i++)
	{
		arr[i] = other.arr[i];
	}
}

CVector::~CVector()//??????????
{
	delete[] arr;
}

//
size_t CVector::get_size() const
{
	return size_;
}
double* CVector::get_arr() const
{
	return arr;
}
//?????????

CVector& CVector::operator=(const CVector& other)
{
	size_ = other.get_size();
	arr = new double[size_];
	for (size_t i = 0; i < size_; i++)
	{
		arr[i] = other.arr[i];
	}
	return *this;
}

double& CVector::operator[](const size_t i)
{
	return arr[i];
}

CVector CVector::operator+(CVector other)
{
	CVector V;

	if(other.get_size() != this->get_size())
		throw - 1;
	else
	{
		for (size_t i = 0; i < size_; i++)
		{
			V.add_elt(other[i] + arr[i]);
		}
	}
	return V;
}

CVector CVector::operator-(CVector other)
{
	CVector V;

	if (other.get_size() != this->get_size())
		throw - 1;
	else
	{
		for (size_t i = 0; i < size_; i++)
		{
			V.add_elt(arr[i] - other[i]);
		}
	}
	return V;
}

double CVector::operator*(CVector other)
{
	double S = 0;
	if (other.get_size() != this->get_size())
		throw - 1;
	else
	{
		for (size_t i = 0; i < size_; i++)
		{
			S+= other[i] * arr[i];
		}
	}
	return S;
}
//???????

void CVector::print_vec()
{
	double t = arr[0];
	for (size_t i = 0; i < size_; i++)
	{
		cout << arr[i]<<" ";
	}
	cout <<"\n";
}

void CVector::add_elt(double elt)//???????? ???? ??? ? ????? ???????, ????????? size
{
	arr = (double*)realloc(arr, sizeof(double) * (size_ + 1));//?????????????? ?????? ?? 1 ?????? ????????
	arr[size_] = elt;                                  
	size_++;
}
