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
};
class Forward: virtual public Futbolist {
protected:
	int Mastery;
	int TotalGoals;
public:
	Forward(int = 5, int = 15, std::string = "Surname", std::string = "TeamName", float = 175.2, float = 68.5);
	virtual ~Forward() {};
	void ScoreGoal(); //реализовать
};