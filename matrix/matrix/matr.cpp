#include "matr.h"
#include <iostream>
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
	for (int i = 0; i < N*N; temp.a[i] = a[i] + A.a[i], i++);
	return temp;

}

Matr Matr:: operator-(const Matr &A)const
{
	if (N != A.N)
		return *this;
	Matr temp(N);
	for (int i = 0; i < N; temp.a[i] = a[i] - A.a[i], i++);
	return temp;

}

Matr Matr:: operator*(const Matr &A)const
{
	if (N != A.N)
		return *this;
	Matr temp(N);
	for (int i = 0; i < N; temp.a[i] = a[i] + A.a[i], i++); //потом вернемся к этому
	return temp;

}

void Matr::set()
{
	for (int i = 0; i < N; a[i] = rand() % 10 - rand() % 10, i++);
}

void Matr::change(unsigned int k)
{
	delete[]a;
	N = k;
	a = new int[N*N];
	for (int i = 0; i < N*N; a[i] = 0, i++);
}

void Matr::print()const
{
	cout << "\n";
	for (int i = 0; i < N*N; i++)
	{
		if (i%N == 0)
			cout << "\n";
		cout << " " << a[i];
	}
}
