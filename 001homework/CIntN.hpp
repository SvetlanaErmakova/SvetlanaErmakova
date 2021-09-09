#ifndef CINTN
#define CINTN

#define N 3

class CIntN
{
	private:
		unsigned int value;
	public:
		CIntN operator+(const CIntN other);
		CIntN operator-(const CIntN other);
		
		int num_digits();
		int Value ();

		CIntN();
		CIntN(const unsigned int value);
};

#endif

#pragma once