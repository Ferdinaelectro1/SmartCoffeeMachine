#pragma once
#include "AppState.h"

class Context
{
    private:
       AppState* _current;

    public: 
      Context(AppState *init);
      ~Context();
      void setState(AppState *state);
      void request();
};