#pragma once
#include "Animal.h"
class Beast : public Animal
{
	string habitat;
public:
	Beast();
	Beast(string name, bool predator, string habitat);

	void setHabitat(string habitat);
	string getHabitat()const;

	void showInfo()const override;
};

