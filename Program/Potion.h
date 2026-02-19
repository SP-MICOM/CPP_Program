#pragma once
#include "Consumable.h"

class Potion : public Consumable
{
private :
	int stamina;
public:
	Potion();
	~Potion();
};

