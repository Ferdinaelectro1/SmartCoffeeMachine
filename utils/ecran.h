#pragma once
#include <iostream>
#include "component.h"
#include "../include/Logger.h"

class Ecran : public Component
{
    private: 
       Ecran(){}
    public: 
       Ecran(const Ecran&) = delete;
       Ecran& operator=(const Ecran&) = delete;
       static void Print(const std::string &msg)
       {
           Logger::getInstance()->log("Appel Écran");
           std::cout << "----------------------------------" << std::endl;
           std::cout << msg  << std::endl;
           std::cout << "----------------------------------" << std::endl;
       }
};