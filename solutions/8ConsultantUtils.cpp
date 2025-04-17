#include "8ConsultantUtils.h";
#include "8Computer.h";
#include <cstring>

bool ConsultantUtils::isGoodForGaming(const Computer* computer) const{
    if (strcpy(computer->getProcessor(), "i5") || strcpy(computer->getProcessor(), "i7")) {
        switch (computer->getVideo())
        {
        case 3060:
        case 3070:
        case 3080:
        case 3090:
            if (computer->getHardDrive() >= 512) return true;
            break;
        default:
            break;
        }   
    }

    return false;
}

bool ConsultantUtils::isGoodForTravel(const Computer* computer) const{
    if (computer->getWeight() <= 2500 && computer->getBatteryLife() >= 360) return true;

    return false;
}
