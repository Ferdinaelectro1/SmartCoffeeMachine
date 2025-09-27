#include "../include/Context.h"

Context::Context(AppState *init):_current(init){

}

Context::~Context()
{
    delete _current;
}

void Context::setState(AppState *state)
{
    delete _current;
    _current = state;
}

void Context::request()
{
    _current->handle(*this);
}