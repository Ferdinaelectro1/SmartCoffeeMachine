#include "../include/ChooseJus.h"
#include <iostream>
#include <thread>
#include <chrono>
#include "../include/Paiement.h"
#include "../include/Logger.h"
#include "../include/Context.h"

void ChooseJus::handle(Context& ctx)
{
    Logger::getInstance()->log("Chois du jus");
    std::cout << "Chois du jus" << std::endl; 
    std::this_thread::sleep_for(std::chrono::seconds(3));
    ctx.setState(new Paiement());
    ctx.request();
}