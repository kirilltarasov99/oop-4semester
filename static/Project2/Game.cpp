#include <string>
#include <iostream>
#include "Game.h"
#include <cmath>
unsigned short Game::maxcounter = 0;
Game::Game(std::string a, std::string b) : n1(a), n2(b), g1(0), g2(0) {}
void Game::changecounter(short a, char b) {
	if (b == '1')
		g1 += a;
	else
		g2 += a;
	if (abs(g1 - g2) > maxcounter)
		maxcounter = abs(g1 - g2);
}