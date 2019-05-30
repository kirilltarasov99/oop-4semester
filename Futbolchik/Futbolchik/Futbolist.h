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
	Futbolist(const Futbolist& A);
	Futbolist& operator = (const Futbolist& A);
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
	Forward(std::string	Surname, std::string TeamName, float Height, float Weight, int TotalGoals, int Mastery) : Futbolist(Surname, TeamName, Height, Weight), TotalGoals(15), Mastery(5) {};
	virtual ~Forward() {};
	Forward(const Forward& other) : Futbolist(other)
	{
		TotalGoals = other.TotalGoals;
		Mastery = other.Mastery;
	}
	Forward& operator = (const Forward& other)
	{
		Futbolist::operator=(other);
		TotalGoals = other.TotalGoals;
		Mastery = other.Mastery;
		return *this;
	};
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
	Defender(std::string Surname, std::string TeamName, float Height, float Weight, int TotalGames, int WonGames) : Futbolist(Surname, TeamName, Height, Weight), TotalGames(50), WonGames(35) {};
	virtual ~Defender() {};
	Defender(const Defender& other) : Futbolist(other)
	{
		TotalGames = other.TotalGames;
		WonGames = other.WonGames;
	}
	Defender &operator = (const Defender &other)
	{
		Futbolist::operator=(other);
		TotalGames = other.TotalGames;
		WonGames = other.WonGames;
		return *this;
	}
	void AddGame();
	void AddWonGame();
};