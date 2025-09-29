#include "../include/Paiement.h"
#include <iostream>
#include <chrono>
#include <thread>
#include "../include/Logger.h"
#include "../include/ReceiveJus.h"
#include "../include/Context.h"
#include "../utils/buzzer.h"
#include "../utils/ecran.h"

void Paiement::handle(Context &ctx) 
{
    Logger::getInstance()->log("Paiement");
    system("clear");
    Ecran::Print("Paiement de l'argent");
    std::this_thread::sleep_for(std::chrono::seconds(3));  
    system("clear");
    Ecran::Print("Saissisez votre argent >> ");
    std::string price;
    std::getline(std::cin,price);
    system("clear");
    Ecran::Print("--Paiement validé--");
    Ecran::Print("--Boisson--");
    Ecran::Print("--Prix >> "+price);
    std::this_thread::sleep_for(std::chrono::seconds(3));  
    ctx.setState(new ReceiveJuse());
    ctx.request();     
}