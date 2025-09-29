#pragma once
#include "def.h"
#include "../include/Logger.h"
#include <iostream>

class Pompe 
{
    private:
       Pompe() =  default;
       Pompe(const Pompe&) = delete;
       Pompe& operator=(const Pompe&) = delete;

    public: 
       static void pomper(JusType t)
       {
          Logger::getInstance()->log("Pompage");
          std::string jusStr = "";
          switch (t)
          {
          case JusType::ORANGE:
            jusStr = "ORANGE";
            break;
          case JusType::MANGUE:
            jusStr = "MANGUE";
            break;
          case JusType::CITRON:
            jusStr = "CITRON";
            break;
          case JusType::PAMPLEMOUSE:
            jusStr = "PAMPLEMOUSE";
            break;
          case JusType::WATER :
            jusStr = "WATER";
            break;
          default:
            break;
          }
          if(jusStr.empty())
          {
             std::cerr << "Aucun jus à pomper" << std::endl;
             Logger::getInstance()->log("Aucun jus détecté à pomper");
             return; 
          }
          std::cout << "Pompage de '"<<jusStr<<"' "<<std::endl;
       }
};