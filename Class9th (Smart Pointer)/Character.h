#pragma once
#include "../Program/stdafx.h"

class Character
{
private:
	weak_ptr<Character> character;
public:
	Character();

	void Partner(const weak_ptr<Character>& reference);

	~Character();

};

