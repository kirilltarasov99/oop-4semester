#pragma once
class Matr
{
	unsigned int N;
	int *a;
public:
	Matr(unsigned int = 1);
	Matr(const Matr&);
	Matr & operator = (const Matr&);
	~Matr() { delete[] a; }
	int & operator [] (int);
	Matr operator + (const Matr&) const;
	Matr operator - (const Matr&) const;
	Matr operator * (const Matr&) const;
	void change(unsigned int = 1);
	Matr operator -() const;
};