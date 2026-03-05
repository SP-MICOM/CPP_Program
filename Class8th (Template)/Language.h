#pragma once
class Language
{
private:
	const char* name;

public:
	Language() = default;

	void Initialize(const char* name);

	const char* Name();

	~Language() = default;
};

