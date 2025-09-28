#pragma once
#include "AppState.h"

class Context;

class Init : public AppState
{
    public: 
      void handle(Context& ctx) override;
};