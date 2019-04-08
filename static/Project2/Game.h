#pragma once
#include <string>
#include <iostream>
#include "Tablo.h"
class Game {
	std::string n1, n2;
	short g1, g2;
private:
	//статический атрибут
	static unsigned short maxcounter;
public:
	Game(std::string = "Team1", std::string = "Team2");
	~Game() {}
	//констр копир и опер по умолчанию
	void changecounter(short, char = '1');
	//обьявляем дружественный метод
	friend void Tablo::printgame(const Game &) const;
	static void printmaxcounter() {
		std::cout << "\n MaxCounter = " << maxcounter;
	}
};