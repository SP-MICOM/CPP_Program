#include "stdafx.h"
#include "Concrete.h"

Concrete::Concrete()
{
	hardness = 0.5f;
	resistance = 0.5f;
}

void Concrete::Desribe()
{
	cout << "Concreate Hardness : " << hardness << endl;
	cout << "Concreate Resistance : " << resistance << endl;
}

Concrete::~Concrete()
{
	cout << "Destroyed Concrete" << endl;
}
