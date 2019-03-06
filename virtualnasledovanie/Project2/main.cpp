#include "animal.h"
#include <iostream>

int main() {
	Bear A(105, "NewDieta", "Bamboo", "Rex");
	A.print();
	std::cout << (std::string) A;
	std::cout << "\n";
	system("pause");
	return 0;
}