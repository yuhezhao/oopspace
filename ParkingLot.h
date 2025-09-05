#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"
#include <vector>

class ParkingLot {
private:
    int capacity;
    std::vector<Vehicle*> vehicles;

public:
    ParkingLot(int cap);
    ~ParkingLot();

    int getCount() const;
    void parkVehicle(Vehicle* v);
    void unparkVehicle(int id);   
    void printStatus() const;     
    int countOverstayingVehicles(int maxParkingDuration) const;
};

#endif
