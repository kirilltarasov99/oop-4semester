#include "Futbolist.h"
#include <iostream>
using namespace std;

int main() {
	Futbolist A("Surname", "Team", 175.1, 68.5);
	A.print();
	Forward B("Surname", "Team", 175.1, 68.5, 20, 6);
	Forward B1(B);
	B1.print();
	B.print();
	B.ScoreGoal();
	B.print();
	ChangeMastery(B);
	B.print();
	Defender C("Surname", "Team", 175.1, 68.5, 50, 35);
	C.print();
	C.AddGame();
	C.AddWonGame();
	C.print();
	cin >> A;
	cout << A;
}