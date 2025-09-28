#pragma once
#include "AppState.h"

class Context;

class ChooseJus : public AppState
{
    public:
       void handle(Context& ctx) override;
};