#include "CVector.hpp"
#include <iostream>
using namespace std;


CVector::CVector()//конструктор по умолчанию
{
	size_ = 0;
	arr= NULL;
}

CVector::CVector(const size_t size)//конструктор
{
	size_ = size;
	arr = (double*)malloc(size * sizeof(double));

	for (size_t i = 0; i < size; i++)
	{
		cout << "elt " << i<<": ";
		cin >> arr[i];
	}
}

CVector::CVector(const CVector& other)//конструктор копирования
{
	size_ = other.get_size();
	arr = other.get_arr();
}

//CVector::~CVector()//деструктор, почему то срабатывает в return, когда внутри оп+ создать объект, кт будет результатом, те до мейна этот объет очищается
//{
//	delete[] arr;
//}

//
size_t CVector::get_size() const
{
	return size_;
}
double* CVector::get_arr() const
{
	return arr;
}
//операторы

CVector& CVector::operator=(const CVector& other)
{
	size_ = other.get_size();
	arr = other.get_arr();
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

CVector CVector::operator*(CVector other)
{
	CVector V;

	if (other.get_size() != this->get_size())
		throw - 1;
	else
	{
		for (size_t i = 0; i < size_; i++)
		{
			V.add_elt(other[i] *arr[i]);
		}
	}
	return V;
}
//функции

void CVector::print_vec()
{
	double t = arr[0];
	for (size_t i = 0; i < size_; i++)
	{
		cout << arr[i]<<" ";
	}
	cout <<"\n";
}

void CVector::add_elt(double elt)//добавить один элт в конец массива, увеличить size
{
	arr = (double*)realloc(arr, sizeof(double) * (size_ + 1));//переопределили массив на 1 больше размером
	arr[size_] = elt;                                  
	size_++;
}
