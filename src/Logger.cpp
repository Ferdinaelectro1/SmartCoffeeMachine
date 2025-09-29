#include "../include/Logger.h"
#include <filesystem>

Logger* Logger::_instance = nullptr;

Logger::Logger(){
    //créer un log dans le répertoire courant
    std::filesystem::path p = std::filesystem::current_path() / "app.log";
    file.open(p);
    if(!file){
        throw std::runtime_error("Impossible d'ouvrir le fichier de log: " + p.string()); 
    }
    file.close();//ouvrir et refermer le fichier le contenu pour écraser son contenu
    file.open(p,std::ios::app);
    if(!file){
        throw std::runtime_error("Impossible d'ouvrir le fichier de log: " + p.string()); 
    }
}

Logger::~Logger()
{
    if(file.is_open())
        file.close();
}

Logger *Logger::getInstance()
{
    if(_instance == nullptr)
        _instance = new Logger();
    return _instance;
}

void Logger::log(const std::string& msg)
{
    file << "[LOG] << "<<msg << std::endl;
}
