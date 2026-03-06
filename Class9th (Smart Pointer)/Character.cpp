#include "Character.h"
#include "../Program/stdafx.h"

Character::Character()
{
	cout << "Created Character" << endl;
}

void Character::Partner(const weak_ptr<Character>& reference)
{
	character = reference;
}

Character::~Character()
{
	cout << "Deleted Character" << endl;
}
