#pragma once
#include <iostream>
#include "../include/Logger.h"

class Ecran 
{
    private: 
       Ecran() = default;
       Ecran(const Ecran&) = delete;
       Ecran& operator=(const Ecran&) = delete;

    public: 
       static void Print(const std::string &msg)
       {
           Logger::getInstance()->log("Appel Écran");
           std::cout << "----------------------------------" << std::endl;
           std::cout << msg  << std::endl;
           std::cout << "----------------------------------" << std::endl;
       }

       static void AnimeVehicle(float delay)
       {
          std::string space = "";
          system("clear");
          for(int i = 0; i < 100; i++)
          {
            std::cout << space <<"|---|" << std::endl;
            std::cout << space <<"|   |______" << std::endl;
            std::cout << space <<"|__________|" << std::endl;
            space += " ";
            int pause = delay*1000;
            std::this_thread::sleep_for(std::chrono::milliseconds(pause));
            system("clear");
          }
       };
};