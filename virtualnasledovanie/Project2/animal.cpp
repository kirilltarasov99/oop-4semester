#include <iostream>
#include "animal.h"

Animal::Animal(std::string a, float b) : name(a), rost(b) {
	std::cout << "\n ConstructorAnimal";
}
void Animal::print() const {
	std::cout << "\n name = " << name << "\n rost = " << rost;
}
//operator std::string() const - ��� ���������� = 0
Meat::Meat(std::string a, std::string b, float c) : Animal(b, c), dieta(a) {
	std::cout << "\n Constructor Meat";
}
void Meat::print() const {
	std::cout << "\n Animal Meat";
	Animal::print();
	std::cout << "\n dieta = " << dieta;
}
Meat::operator std::string() const {
	return "\n Meat:" + dieta;
}
Veget::Veget(std::string a, std::string b, float c) : Animal(b, c), plant(a) {
	std::cout << "\n Constructor Veget";
}
void Veget::print() const {
	std::cout << "\n Animal Veget";
	Animal::print();
	std::cout << "\n Veget = " << plant;
}
Veget::operator std::string() const {
	return "\n Veget:" + plant;
}
Bear::Bear(int a1, std::string a, std::string b, std::string c): Animal(c), Meat(a), Veget(b), weight(a1) {
	std::cout << "\n Constructor Bear";
}
Bear::operator std::string() const {
	return Meat::operator std::string() + Veget::operator std::string();
}
void Bear::print() const {
	std::cout << "\n Bear: ";
	Animal::print();
	std::cout << "\n dieta = " << dieta << "\n plant = " << plant << "\n weight = " << weight;
}
std::ostream& operator << (std::ostream& potok, const Bear&A) {
	std::cout << "\n Bear: " << "\n name" << A.name << "\n dieta = " << A.dieta << "\n plant = " << A.plant << "\n rost = " << A.rost << "\n weight = " << A.weight;
	return potok;
}
std::istream& operator >> (std::istream& potok, Bear& A) {
	std::cout << "\n name = ";
	std::cin >> A.name;
	std::cout << "\n dieta = ";
	std::cin >> A.dieta;
	std::cout << "\n weight = ";
	std::cin >> A.weight;
	std::cout << "\n plant = ";
	std::cin >> A.plant;
	std::cout << "\n rost = ";
	std::cin >> A.rost;
	return potok;
}