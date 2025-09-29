#pragma once
#include <string>

enum JusType : int
{
    ORANGE,
    MANGUE,
    CITRON,
    PAMPLEMOUSE,
    WATER
};

inline JusType getJusType(int i)
{
    switch (i)
    {
    case 1:
        return ORANGE;
    case 2:
        return MANGUE;
    case 3:
        return CITRON;
    case 4:
        return PAMPLEMOUSE;
    default:
        return WATER;
    }
}

inline std::string getJusStr(JusType t)
{
    std::string jusStr;
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
        jusStr =  "UNKNOW";
        break;
    }
    return jusStr;
}