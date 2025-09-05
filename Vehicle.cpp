#include "Vehicle.h"

Vehicle::Vehicle(int id) : ID(id) {
    timeOfEntry = std::time(nullptr); // 记录进入时间
}

int Vehicle::getID() const {
    return ID;
}
