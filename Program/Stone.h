#pragma once
#include "Block.h"
class Stone : public Block
{
public:
    Stone();
    virtual void Desribe() override;
    virtual ~Stone();
};

