#pragma once
#include "Fish.h"
#include "Bird.h"
#include "Beast.h"
#include "ZooException.h"
#include <vector>
#include <algorithm>
using std::vector;

class Enclosure
{
	int number;
	int maxAnimals;
	int currentAnimals;
	vector<Animal*> animals;
public:
	Enclosure(int number, int maxAnimals);

	void setNumber(int number);
	void setMaxAnimals(int maxAnimals);
	
	int getNumber()const;
	int getMaxAnimals()const;
	int getCurrentAnimals()const;

	void addAnimal(Animal* animal);
	void delAnimal(string name);
	Animal* findAnimal(string name);
	void showAll()const;

};

