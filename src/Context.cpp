#include "../include/Context.h"
#include "../include/AppState.h"
#include "../utils/def.h"

Context::Context(AppState *init):_current(init){
}

Context::~Context()
{
    delete _current;
}

void Context::setJusType(JusType t)
{
    _justype = t;
}

void Context::setState(AppState *state)
{
    if(_current != state)//eviter la double libération de mémoire
        delete _current;
    _current = state;
}

void Context::request()
{
    _current->handle(*this);
}

JusType Context::getJusType()
{
    return _justype;
}