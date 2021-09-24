#ifndef CVECTOR
#define CVECTOR

class CVector
{
	public:
		CVector();
		CVector(const size_t size);
		CVector(const CVector& other);
		//~CVector();

		size_t get_size() const;
		double* get_arr() const;

		CVector& operator=(const CVector& other);
		double& operator[](const size_t i);
		CVector operator+(CVector other);
		CVector operator-(CVector other);
		double operator*(CVector other);

		void print_vec();
		void add_elt(double elt);

	private:
		double* arr;
		size_t size_;


};


#endif
