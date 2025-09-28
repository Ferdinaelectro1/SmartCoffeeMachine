#include "../include/Init.h"
#include <iostream>
#include <thread>
#include <chrono>
#include "../include/ChooseJus.h"
#include "../include/Logger.h"
#include "../include/AppState.h"
#include "../include/Context.h"

void Init::handle(Context& ctx) 
{
    Logger::getInstance()->log("Init");
    std::cout << "Initialisation"<< std::endl; 
    std::this_thread::sleep_for(std::chrono::seconds(3));
    ctx.setState(new ChooseJus());
    ctx.request();
}