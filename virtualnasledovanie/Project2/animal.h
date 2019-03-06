#pragma once
#include <string>

class Animal {
protected:
	std::string name;
	float rost;
public:
	Animal(std::string = "Animal 1", float = 0.2);
	virtual ~Animal() {}
	//конструктор копирования и оператор присваивания по умолчанию
	virtual void print() const;
	virtual operator std::string() const = 0;
};
class Meat :virtual public Animal {
protected:
	std::string dieta;
public:
	Meat(std::string = "Meat 1", std::string = "AnimalMeat", float = 0.2);
	virtual ~Meat() {};
	virtual operator std::string() const;
	virtual void print() const;
};
class Veget: virtual public Animal {
protected:
	std::string plant;
public:
	Veget(std::string = "Trees", std::string = "AnimalVeget", float = 0.2);
	virtual ~Veget() {};
	virtual operator std::string() const;
	virtual void print() const;
};
class Bear: public Meat, public Veget {
	int weight;
public:
	Bear(int = 100, std::string = "MeatDieta", std::string = "VegetPlant", std::string = "Bear");
	virtual ~Bear() {};
	virtual operator std::string() const;
	virtual void print() const;
};