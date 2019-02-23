#include "matr.h"
#include <ctime>
#include <iostream>
using namespace std;

int main() {
	srand(time(0));
	int N=4;
	Matr A(N), B(N);
	A.set();
	B.set();
	A.print();
	B.print();
	(A+B).print();
	(A-B).print();
	system ("pause");
	return 0;
}

