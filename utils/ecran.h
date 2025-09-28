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
};