#pragma once
#include <iostream>
#include <chrono>
#include <thread>
#include "Logger.h"
#include "AppState.h"
#include "Context.h"

class ReceiveJuse : public AppState
{
    public:
      void handle(Context &ctx) override
      {
        Logger::getInstance()->log("Réception du jus");
        std::cout << "Réception du jus" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(3));
      }
};