#include "Game.h"
using namespace std;
Tablo::Tablo(float a, float b): w(a), h(b) {}
void Tablo::printgame(const Game & A) const {
	std::cout << "\n Game:\n" << A.n1 << "\t:" << A.n2 << "\n" << A.g1 << "\t:" << A.g2;
};
	ostream& operator << (ostream &potok, const Tablo& A) {
		potok << "\n Tablo:" << A.w << ":" << A.h;
		return potok;
	};
	istream& operator >> (istream& potok, Tablo&  A) {
		std::cout << "\n Tablo: w, h:?";
		potok >> A.w >> A.h;
		std::cout << "\n OK!";
		return potok;
	};