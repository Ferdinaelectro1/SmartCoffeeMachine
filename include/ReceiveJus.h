#pragma once
#include "AppState.h"

class ReceiveJuse : public AppState
{
    public:
      void handle(Context &ctx) override;
};