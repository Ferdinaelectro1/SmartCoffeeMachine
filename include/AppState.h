#pragma once

class Context;

class AppState
{
    public:
      virtual void handle(Context &ctx) = 0;
      virtual ~AppState();
};