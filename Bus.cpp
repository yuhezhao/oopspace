#include "Bus.h"
#include <ctime>

Bus::Bus(int id) : Vehicle(id) {}

int Bus::getParkingDuration() const {
    time_t now = std::time(nullptr);
    int duration = static_cast<int>(difftime(now, timeOfEntry));
    return static_cast<int>(duration * 0.75); // Bus 减少 25%
}
