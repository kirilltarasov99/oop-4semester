#include <iostream>
#include "Futbolist.h"
//using namespace std;

Futbolist::Futbolist(std::string a, std::string a1, float b, float b1) : Surname(a), TeamName(a1), Height(b), Weight(b1) {
	std::cout << "\n ConstructorFutbolist";
}

Futbolist::Futbolist(const Futbolist& A)
{
	Surname = A.Surname;
	TeamName = A.TeamName;
	Weight = A.Weight;
	Height = A.Height;
}

Futbolist& Futbolist::operator=(const Futbolist& A)
{
	Surname = A.Surname;
	TeamName = A.TeamName;
	Weight = A.Weight;
	Height = A.Height;
	return *this;
}


void Futbolist::print() const {
	std::cout << "\n Surname = " << Surname << "\n TeamName = " << TeamName << "\n Height = " << Height << "\n Weight = " << Weight;
}

void Futbolist::ChangeHeight(float k) {
	std::cout << "\n New Height = ";
	std::cin >> k;
	Height = k;
}

void Futbolist::ChangeWeight(float k) {
	std::cout << "\n New Weight = ";
	std::cin >> k;
	Weight = k;
}

void Forward::ScoreGoal()
{
	std::cout << "\n Goal was scored!";
	TotalGoals++;
}

void Forward::print() const
{
	std::cout << "\n Surname = " << Surname << "\n TeamName = " << TeamName << "\n Height = " << Height << "\n Weight = " << Weight << "\n Mastery = " << Mastery << "\n Total goals = " << TotalGoals;
}

void Defender::AddGame()
{
	std::cout << "\n The player participated in another game";
	TotalGames++;
}

void Defender::AddWonGame()
{
	std::cout << "\n The player participated in a successful game";
	WonGames++;
}

std::ostream& operator << (std::ostream& potok, const Futbolist& A)
{
	potok << "\n Surname = " << A.Surname << "\n TeamName = " << A.TeamName << "\n Height = " << A.Height << "\n Weight = " << A.Weight;
	return potok;
}

std::istream& operator >> (std::istream& potok, Futbolist& A)
{
	std::cout << "\n Surname?";
	potok >> A.Surname;
	std::cout << "\n TeamName?";
	potok >> A.TeamName;
	std::cout << "\n Height?";
	potok >> A.Height;
	std::cout << "\n Weight?";
	potok >> A.Weight;
	return potok;
}

void ChangeMastery(Forward & B)
{
	int Temp;
	std::cout << "\n Enter mastery value:";
	std::cin >> Temp;
	B.Mastery = Temp;
}