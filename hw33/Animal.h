#pragma once
#include <iostream>
#include <string>
#include "ZooException.h"
using std::cout;
using std::string;
using std::endl;

class Animal
{
protected:
	string name;
	bool predator;
public:
	Animal();
	Animal(string name, bool predator);
	virtual ~Animal() {};

	void setName(string name);
	void setPredator(bool predator);

	string getName()const;
	bool getPredator()const;

	virtual void showInfo()const = 0;
};