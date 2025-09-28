#include "../include/Context.h"
#include "../include/AppState.h"

Context::Context(AppState *init):_current(init){

}

Context::~Context()
{
    delete _current;
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