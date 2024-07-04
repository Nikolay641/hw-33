#include "Animal.h"

Animal::Animal()
{
    name = "undefined";
    predator = false;
}

Animal::Animal(string name, bool predator)
{
    if (name.size() == 0) { throw new NameException(); }
    this->predator = predator;
}

void Animal::setName(string name){ this->name = name; }

void Animal::setPredator(bool predator){ this->predator = predator; }

string Animal::getName() const{ return name; }

bool Animal::getPredator() const{ return predator; }
