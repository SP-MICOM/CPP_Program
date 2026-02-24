#pragma once
#include "Stat.h"
class Strength : public Stat
{
public:
	virtual void Enhance() override;

	virtual ~Strength();
};

