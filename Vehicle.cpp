#include "Vehicle.h"

Vehicle::Vehicle(int id) : ID(id) {
    timeOfEntry = std::time(nullptr); // 进入停车场时间
}

int Vehicle::getID() const {
    return ID;
}
