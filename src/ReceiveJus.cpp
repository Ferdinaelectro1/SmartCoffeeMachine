#include "../include/ReceiveJus.h"
#include <iostream>
#include <chrono>
#include <thread>
#include "../include/Logger.h"
#include "../include/Context.h"

void ReceiveJuse::handle(Context &ctx)
{
    Logger::getInstance()->log("Réception du jus");
    std::cout << "Réception du jus" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
}