#pragma once
#include <iostream>
#include <thread>
#include <chrono>
#include "def.h"
#include "../include/Logger.h"

class Cuisseur 
{
    private: 
      Cuisseur() = default;
      Cuisseur(const Cuisseur&) = delete;
      Cuisseur& operator=(const Cuisseur&) = delete;

    public:
       static void cuireJus()
       {
           Logger::getInstance()->log("Cuisson des jus");
           std::cout << "Cuissons des jus ..." << std::endl; 
       }
};