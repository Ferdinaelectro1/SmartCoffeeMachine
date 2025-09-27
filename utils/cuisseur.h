#pragma once
#include <iostream>
#include <thread>
#include <chrono>
#include "component.h"
#include "def.h"
#include "../include/Logger.h"

class Cuisseur : public Component
{
    private: 
      Cuisseur(){}

    public:
       Cuisseur(const Cuisseur&) = delete;
       Cuisseur& operator=(const Cuisseur&) = delete;
       static void cuireJus()
       {
           Logger::getInstance()->log("Cuisson des jus");
           std::cout << "Cuissons des jus ..." << std::endl; 
       }
};