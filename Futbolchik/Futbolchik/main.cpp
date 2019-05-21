#include "Futbolist.h"
#include <iostream>
using namespace std;

int main() {
	Futbolist A("Surname", "Team", 175.1, 68.5);
	A.print();
	Forward B(6, 20, "Surname", "Team", 175.1, 68.5);
	B.print();
	B.ScoreGoal();
	B.print();
	ChangeMastery(B);
	B.print();
	Defender C(50, 35, "Surname", "Team", 175.1, 68.5);
	C.print();
	C.AddGame();
	C.AddWonGame();
	C.print();
}