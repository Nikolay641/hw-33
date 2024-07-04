#include "Fish.h"

Fish::Fish()
{
    deepWater = false;
}

Fish::Fish(string name, bool predator, bool deepWater) : Animal(name,predator)
{
    this->deepWater = deepWater;
}

void Fish::setDeepWater(bool deepWater){ this->deepWater = deepWater; }

bool Fish::getDeepWater() const{ return deepWater; }

void Fish::showInfo() const
{
    cout << "Name: " << name << endl;
    cout << "Predator: " << (predator ? "yes" : "no") << endl;
    cout << "Deep water: " << (deepWater ? "yes" : "no") << endl;
}
