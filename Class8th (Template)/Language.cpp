#include "Language.h"

void Language::Initialize(const char* name)
{
	this->name = name;
}

const char* Language::Name()
{
	return this->name;
}
