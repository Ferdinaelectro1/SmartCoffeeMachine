#include "../include/ReceiveJus.h"
#include <iostream>
#include <chrono>
#include <thread>
#include "../include/Logger.h"
#include "../include/Context.h"
#include "../utils/ecran.h"

void ReceiveJuse::handle(Context &ctx)
{
    Logger::getInstance()->log("Réception du jus");
    Ecran::AnimeVehicle(0.05);
;    std::this_thread::sleep_for(std::chrono::seconds(3));
}