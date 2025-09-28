#include "../include/Paiement.h"
#include <iostream>
#include <chrono>
#include <thread>
#include "../include/Logger.h"
#include "../include/ReceiveJus.h"
#include "../include/Context.h"

void Paiement::handle(Context &ctx) 
{
    Logger::getInstance()->log("Paiement");
    std::cout << "Paiement "<< std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));    
    ctx.setState(new ReceiveJuse());
    ctx.request();     
}