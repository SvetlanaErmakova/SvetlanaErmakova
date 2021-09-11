#ifndef CINTN
#define CINTN

#define N 3

class CIntN
{
	private:
		int value[N];
	public:
		CIntN operator+(const CIntN other);
		CIntN operator-(const CIntN other);
		
		int Value ();

		CIntN();
		CIntN(const unsigned int value);
};

int num_digits(int val);

#endif
