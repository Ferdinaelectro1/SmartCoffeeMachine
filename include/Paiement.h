#pragma once
#include "AppState.h"

class Context;

class Paiement : public AppState
{
    public:
       void handle(Context &ctx) override;
};