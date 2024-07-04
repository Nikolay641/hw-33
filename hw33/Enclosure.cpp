#include "Enclosure.h"

Enclosure::Enclosure(int number, int maxAnimals)
{
    this->number = number;
    this->maxAnimals = maxAnimals;
    this->currentAnimals = 0;
}

void Enclosure::setNumber(int number){ this->number = number; }

void Enclosure::setMaxAnimals(int maxAnimals){ this->maxAnimals = maxAnimals; }

int Enclosure::getNumber() const{ return number; }

int Enclosure::getMaxAnimals() const{ return maxAnimals; }

int Enclosure::getCurrentAnimals() const{ return currentAnimals; }

void Enclosure::addAnimal(Animal* animal)
{
    if (currentAnimals >= maxAnimals) { throw MaxCapacityException(); }
    
    bool hasNonPredators = false;
    bool hasPredators = false;

    for (auto item : animals) {
        if (item->getPredator()) {
            hasPredators = true;
        }
        else {
            hasNonPredators = true;
        }
    }
    if (animal->getPredator() && hasNonPredators) {
        throw new PredatorException();
    }
    if (!animal->getPredator() && hasPredators) {
        throw new PredatorException();
    }

    animals.push_back(animal);
    currentAnimals++;
}

void Enclosure::delAnimal(string name)
{
    for (auto item = animals.begin(); item != animals.end(); ++item) {
        if ((*item)->getName() == name) {
            animals.erase(item);
            currentAnimals--;
            return;
        }
    }
}

Animal* Enclosure::findAnimal(string name)
{
    for (auto a : animals) {
        if (a->getName() == name) {
            return a;
        }
    }
    return nullptr;
}

void Enclosure::showAll() const
{
    for (auto item : animals) {
        item->showInfo();
        cout << endl;
    }
}
