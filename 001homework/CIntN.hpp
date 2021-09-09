#define N 3
class CIntN
{
	private:
		unsigned int value;
	public:
		CIntN operator+(const CIntN other);
		CIntN operator-(const CIntN other);
		
		void Value_check();
		int num_digits();

		CIntN();
		CIntN(const unsigned int value);
};

