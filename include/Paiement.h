#pragma once
#include <iostream>
#include <chrono>
#include <thread>
#include "Logger.h"
#include "AppState.h"
#include "ReceiveJuse.h"
#include "Context.h"

class Paiement : public AppState
{
    public:
       void handle(Context &ctx) override
       {
           Logger::getInstance()->log("Paiement");
           std::cout << "Paiement "<< std::endl;
           std::this_thread::sleep_for(std::chrono::seconds(3));    
           ctx.setState(new ReceiveJuse());
           ctx.request();     
       }
};