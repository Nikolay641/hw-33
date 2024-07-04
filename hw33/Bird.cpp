#include "Bird.h"

Bird::Bird()
{
    flightSpeed = 0;
}

Bird::Bird(string name, bool predator, int flightSpeed) : Animal(name, predator)
{
    this->flightSpeed = flightSpeed;
}

void Bird::setFlightSpeed(int flightSpeed){ this->flightSpeed = flightSpeed; }

int Bird::getFlightSpeed() const{ return flightSpeed; }

void Bird::showInfo() const
{
    cout << "Name: " << name << endl;
    cout << "Predator: " << (predator ? "yes" : "no") << endl;
    cout << "Flight speed: " << flightSpeed << endl;
}
