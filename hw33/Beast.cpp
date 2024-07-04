#include "Beast.h"

Beast::Beast()
{
    habitat = "undefined";
}

Beast::Beast(string name, bool predator, string habitat) : Animal(name, predator)
{
    this->habitat = habitat;
}

void Beast::setHabitat(string habitat){ this->habitat = habitat; }

string Beast::getHabitat() const{ return habitat; }

void Beast::showInfo() const
{
    cout << "Name: " << name << endl;
    cout << "Predator: " << (predator ? "yes" : "no") << endl;
    cout << "Habitat: " << habitat << endl;
}
