#include "../include/ChooseJus.h"
#include <iostream>
#include <thread>
#include <chrono>
#include "../include/Paiement.h"
#include "../include/Logger.h"
#include "../include/Context.h"
#include "../utils/ecran.h"

void ChooseJus::handle(Context& ctx)
{
    Logger::getInstance()->log("Chois du jus");
    system("clear");
    Ecran::Print("Vous voulez >> ");
    std::this_thread::sleep_for(std::chrono::seconds(5));    
    ctx.setState(new Paiement());
    ctx.request();
}