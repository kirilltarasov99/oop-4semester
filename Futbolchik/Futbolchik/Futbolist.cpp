#include <iostream>
#include "Futbolist.h"

Futbolist::Futbolist(std::string a, std::string a1, float b, float b1) : Surname(a), TeamName(a1), Height(b), Weight(b1) {
	std::cout << "\n ConstructorFutbolist";
}

void Futbolist::print() const {
	std::cout << "\n Surname = " << Surname << "\n TeamName = " << TeamName << "\n Height = " << Height << "\n Weight = " << Weight;
}

void Futbolist::ChangeHeight(float k) {
	std::cout << "\n New Height = ";
	std::cin >> k;
	Height = k;
}

void Futbolist::ChangeWeight(float k) {
	std::cout << "\n New Weight = ";
	std::cin >> k;
	Weight = k;
}
