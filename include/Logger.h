#pragma once
#include <iostream>
#include <fstream>

class Logger
{
    private: 
       Logger(){
          file.open("../utils/app.log",std::ios::app);
          if(!file){
              std::cerr << "Erreur lors de l'ouverture du fichier de log" << std::endl;
              exit(1);
          }
       }
       std::ofstream file;
       static Logger* _instance;

    public:
        Logger(const Logger&) = delete;
        Logger& operator=(const Logger&) = delete;
        static Logger *getInstance()
        {
            if(_instance == nullptr)
                _instance = new Logger();
            return _instance;
        }
        void log(const std::string& msg)
        {
            file << "[LOG] << "<<msg << std::endl;
        }
        ~Logger()
        {
            file.close();
        }
};