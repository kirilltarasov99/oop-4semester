#pragma once
#include <string>

class Futbolist {
protected:
	std::string Surname;
	std::string TeamName;
	float Height;
	float Weight;
public:
	Futbolist(std::string = "Surname", std::string = "TeamName", float = 175.2, float = 68.5);
	virtual ~Futbolist() {};
	virtual void print() const;
	void ChangeHeight(float);
	void ChangeWeight(float);
	friend std::ostream& operator << (std::ostream&, const Futbolist&);
	friend std::istream& operator >> (std::istream&, Futbolist&);
};
class Forward: virtual public Futbolist {
protected:
	int TotalGoals;
public:
	int Mastery;
	Forward(int = 5, int = 15, std::string = "Surname", std::string = "TeamName", float = 175.2, float = 68.5);
	virtual ~Forward() {};
	void ScoreGoal();
	void print() const;
	friend void ChangeMastery(Forward& B);
};
class Defender: virtual public Futbolist
{
protected:
	int TotalGames;
	int WonGames;
public:
	Defender(int = 50, int = 35, std::string = "Surname", std::string = "TeamName", float = 175.2, float = 68.5);
	virtual ~Defender() {};
	void AddGame();
	void AddWonGame();
};