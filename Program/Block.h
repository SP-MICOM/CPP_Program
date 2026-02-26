#pragma once
class Block
{
protected:
	float hardness;
	float resistance;
public:
	virtual void Desribe() = 0;
	virtual ~Block();
};

