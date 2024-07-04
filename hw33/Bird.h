#pragma once
#include "Animal.h"
class Bird : public Animal
{
protected:
	int flightSpeed;
public:
	Bird();
	Bird(string name, bool predator, int flightSpeed);

	void setFlightSpeed(int flightSpeed);
	int getFlightSpeed()const;

	void showInfo()const override;
};

