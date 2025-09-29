#include "../include/Init.h"
#include <iostream>
#include <thread>
#include <chrono>
#include "../include/ChooseJus.h"
#include "../include/Logger.h"
#include "../include/AppState.h"
#include "../include/Context.h"
#include "../utils/buzzer.h"
#include "../utils/ecran.h"
#include "../utils/def.h"

void Init::handle(Context& ctx) 
{
    Logger::getInstance()->log("Init");
    system("clear");
    Ecran::Print("Initialisation");
    std::this_thread::sleep_for(std::chrono::seconds(4));    
    system("clear");   
    Ecran::Print("Bienvenue Mr/Mmme");
    std::this_thread::sleep_for(std::chrono::seconds(2));    
    system("clear");
    Ecran::Print("Quel jus voulez vous ??");
    std::cout << "1 : "<< "ORANGE" << std::endl;
    std::cout << "2 : "<< "MANGUE" << std::endl;
    std::cout << "3 : "<< "CITRON" << std::endl;
    std::cout << "4 : "<< "PAMPLEMOUSE" << std::endl;
    std::cout << "5 : "<< "WATER" << std::endl;
    ctx.setState(new ChooseJus());
    ctx.request();
}