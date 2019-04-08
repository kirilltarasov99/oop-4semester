#pragma once
#include <string>
#include <iostream>
#include "Tablo.h"
class Game {
	std::string n1, n2;
	short g1, g2;
private:
	//����������� �������
	static unsigned short maxcounter;
public:
	Game(std::string = "Team1", std::string = "Team2");
	~Game() {}
	//������ ����� � ���� �� ���������
	void changecounter(short, char = '1');
	//��������� ������������� �����
	friend void Tablo::printgame(const Game &) const;
	static void printmaxcounter() {
		std::cout << "\n MaxCounter = " << maxcounter;
	}
};