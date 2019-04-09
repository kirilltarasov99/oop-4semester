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
	Forward(int = 5, int = 15); //, std::string = "Surname", std::string = "TeamName", float = 175.2, float = 68.5
	virtual ~Forward() {};
	void print() const;
	void ScoreGoal(); //реализовать
};
class Defender : virtual public Futbolist {
protected:
	int TotalMatches;
	int WonMatches;
public:
	Defender(int = 20, int = 17);
	virtual ~Defender() {};

};