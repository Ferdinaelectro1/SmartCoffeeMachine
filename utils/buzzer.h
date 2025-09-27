#pragma once
#include <thread>
#include <chrono>
#include "component.h"
#include "../include/Logger.h"

class Buzzer: public Component
{
    private:
       Buzzer(){}
    
    public: 
       Buzzer(const Buzzer&) = delete;
       Buzzer& operator=(const Buzzer&) = delete;
       static void tone(int delay = 0)
       {
          Logger::getInstance()->log("Sonnage du buzzer");
          std::cout << "Driingggggggg" << std::endl;
          std::this_thread::sleep_for(std::chrono::seconds(delay));
       }
};