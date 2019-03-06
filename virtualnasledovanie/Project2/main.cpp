#include "animal.h"
#include <iostream>

int main() {
	/*Bear A(105, "NewDieta", "Bamboo", "Rex");
	A.print();
	std::cout << (std::string) A;
	Animal *p = 0;
	std::cout << "\n Meat: 1 \n Veget: 2 \n Bear: 3 \n";
	char otvet;
	std::cin >> otvet;
	switch (otvet) {
	case '1': p = new Meat; break;
	case '2': p = new Veget; break;
	case '3': p = new Bear;
	}
	p->print();
	std::cout << (std::string) (*p);
	delete p;*/
	Bear B;
	std::cin >> B;
	std::cout << B;
	std::cout << "\n";
	system("pause");
	return 0;
}