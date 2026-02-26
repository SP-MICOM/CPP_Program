#include "stdafx.h"
#include "Stone.h"

Stone::Stone()
{
	hardness = 1.5f;
	resistance = 6.0f;
}

void Stone::Desribe()
{
	cout << "Stone Hardness : " << hardness << endl;
	cout << "Stone Resistance : " << resistance << endl;
}

Stone::~Stone()
{
	cout << "Destroyed Stone" << endl;
}
