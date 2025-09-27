#pragma once
#include <iostream>
#include <thread>
#include <chrono>
#include "ChooseJus.h"
#include "Logger.h"
#include "AppState.h"
#include "Context.h"

class Init : public AppState
{
    public: 
      void handle(Context& ctx) override
      {
        Logger::getInstance()->log("Init");
        std::cout << "Initialisation"<< std::endl; 
        std::this_thread::sleep_for(std::chrono::seconds(3));
        ctx.setState(new ChooseJus());
        ctx.request();
      }
};