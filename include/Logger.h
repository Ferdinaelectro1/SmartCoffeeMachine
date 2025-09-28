#pragma once
#include <fstream>

class Logger
{
    private:
       std::ofstream file;
       static Logger* _instance;

    private: 
       Logger();

    public:
        Logger(const Logger&) = delete;
        Logger& operator=(const Logger&) = delete;
        static Logger *getInstance();
        void log(const std::string& msg);
        ~Logger();
};