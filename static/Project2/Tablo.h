#pragma once
class Game;
class Tablo {
	float w, h;
public:
	Tablo(float = 0.5, float = 0.5);
	~Tablo() {}
	//конструктор копир. и опер по умолчанию
	void printgame(const Game &) const;
	friend std::ostream& operator << (std::ostream&, const Tablo&);
	friend std::istream& operator >> (std::istream&, Tablo&);
};