#pragma once
#include <thread>
#include <chrono>
#include "../include/Logger.h"

class Buzzer
{
    private:
       Buzzer() = default;
       Buzzer(const Buzzer&) = delete;
       Buzzer& operator=(const Buzzer&) = delete;    

    public: 
       static void tone(int delay = 0)
       {
          Logger::getInstance()->log("Sonnage du buzzer");
          std::cout << "Driingggggggg" << std::endl;
          std::this_thread::sleep_for(std::chrono::seconds(delay));
       }
};