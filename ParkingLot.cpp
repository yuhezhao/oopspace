#include "ParkingLot.h"
#include <iostream>
#include <algorithm>

ParkingLot::ParkingLot(int cap) : capacity(cap) {}

ParkingLot::~ParkingLot() {
    for (auto v : vehicles) {
        delete v;
    }
}

int ParkingLot::getCount() const {
    return vehicles.size();
}

void ParkingLot::parkVehicle(Vehicle* v) {
    if ((int)vehicles.size() >= capacity) {
        std::cout << "The lot is full" << std::endl;
        return;
    }
    vehicles.push_back(v);
}

void ParkingLot::unparkingVehicle(int id) {
    auto it = std::find_if(vehicles.begin(), vehicles.end(),
                           [id](Vehicle* v) { return v->getID() == id; });

    if (it == vehicles.end()) {
        std::cout << "Vehicle not in the lot" << std::endl;
        return;
    }

    delete *it;
    vehicles.erase(it);
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration) const {
    int count = 0;
    for (auto v : vehicles) {
        if (v->getParkingDuration() > maxParkingDuration) {
            count++;
        }
    }
    return count;
}
