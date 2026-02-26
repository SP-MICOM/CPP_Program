#pragma once
#include "Block.h"
class Concrete : public Block
{
public:
    Concrete();
    virtual void Desribe() override;
    virtual ~Concrete();
};

