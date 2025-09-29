#pragma once

class AppState;
enum JusType : int;

class Context
{
    private:
       AppState* _current;
       JusType _justype;

    public: 
      Context(AppState *init);
      ~Context();
      void setState(AppState *state);
      void request();
      void setJusType(JusType t);
      JusType getJusType();
};