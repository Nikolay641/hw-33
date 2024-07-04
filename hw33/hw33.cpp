#include <iostream>
#include "Enclosure.h"

int main()
{
	Enclosure enclosure(1, 5);
	try
	{
		Animal* lion = new Beast("Lion", true, "Savannah");
		Animal* deer = new Beast("Deer", false, "Forest");

		enclosure.addAnimal(lion);
		enclosure.addAnimal(deer);
	}
	catch (const exception* obj) {
		cout << obj->what() << endl;
	}
	try {
		Animal* emptyName = new Bird("", true, 100);
	}
	catch (const exception* obj) {
		cout << obj->what() << endl;
	}
}