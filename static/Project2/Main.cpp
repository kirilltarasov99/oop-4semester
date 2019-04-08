#include "Game.h"
int main() {
	Tablo T;
	Game G("...", "...");
	T.printgame(G);
	G.changecounter(10, '2');
	G.changecounter(3, '1');
	T.printgame(G);
	std::cin >> T;
	std::cout << T;
	Game::printmaxcounter();
	system("pause");
	return 0;
}