#pragma once
#include "Animal.h"
class Fish : public Animal
{
protected:
	bool deepWater;
public:
	Fish();
	Fish(string name, bool predator, bool deepWater);

	void setDeepWater(bool deepWater);
	bool getDeepWater()const;

	void showInfo()const override;
};

