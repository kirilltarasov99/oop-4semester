#include "Futbolist.h"
#include <iostream>
using namespace std;

int main() {
	Futbolist A("Surname", "Team", 175.1, 68.5);
	A.print();
	Forward A1(5, 20);
	A1.print();
}