#include "Matr.h"
using namespace std;

Matr::Matr(unsigned int k)
{
	if (k < 1)
		N = 1;
	else
		N = k;
	a = new int[N*N];
	for (int i = 0; i < N*N; a[i] = 0, i++);
}

Matr::Matr(const Matr & A) : N(A.N)
{
	a = new int[N*N];
	for (int i = 0; i < N*N; a[i] = A.a[i], i++);
}

Matr & Matr::operator =(const Matr & A)
{
	if (this == &A) return *this;
	if (N != A.N)
	{
		delete[] a;
		a = new int[N*N];
	}
	for (int i = 0; i < N*N; a[i] = A.a[i], i++);
	return *this;
}

int & Matr::operator [](int k)
{
	if (k >= N * N)
		return a[0];
	else
		return a[k];
}

Matr Matr:: operator+(const Matr &A)const
{
	if (N != A.N)
		return *this;
	Matr temp(N);
	for (int i = 0; i < N * N; temp.a[i] = a[i] + A.a[i], i++);
	return temp;

}

Matr Matr:: operator-(const Matr &A)const
{
	if (N != A.N)
		return *this;
	Matr temp(N);
	for (int i = 0; i < N * N; temp.a[i] = a[i] - A.a[i], i++);
	return temp;

}

Matr Matr:: operator*(const Matr &A)const
{
	if (N != A.N)
		return *this;
	Matr temp(N);
	for (int i = 0; i < N * N; temp.a[i] = a[i] * A.a[i], i++);
	return temp;
}
void Matr::change(unsigned int k)
{
	delete[]a;
	N = k;
	a = new int[N*N];
	for (int i = 0; i < N*N; a[i] = 0, i++);
}
Matr Matr::operator -() const {
	Matr T(*this);
	for (int i = 0; i < N; i++)
		for (int j = 0; j < i; j++) {
			int z = T.a[i * N + j];
			T.a[i * N + j] = T.a[j * N + i];
			T.a[j * N + i] = z;
		}
	return T;
}