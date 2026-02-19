#include "Consumable.h"
#include <iostream>

using namespace std;

Consumable::Consumable()
{
	cout << "Created Consumable" << endl;
}

Consumable::~Consumable()
{
	cout << "Destroyed Consumable" << endl;
}