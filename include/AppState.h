#pragma once
#include "Context.h"

class Context;

class AppState
{
    public:
      virtual void handle(Context &ctx) = 0;
      virtual ~AppState(){};
};