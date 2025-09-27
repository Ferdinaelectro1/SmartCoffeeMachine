#pragma once
#include <iostream>
#include <thread>
#include <chrono>
#include "Paiement.h"
#include "Logger.h"
#include "AppState.h"
#include "Context.h"

class ChooseJus : public AppState
{
    public:
       void handle(Context& ctx) override
       {
          Logger::getInstance()->log("Chois du jus");
          std::cout << "Chois du jus" << std::endl; 
          std::this_thread::sleep_for(std::chrono::seconds(3));
          ctx.setState(new Paiement());
          ctx.request();
       }
};