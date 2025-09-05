#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>
#include <string>

class Vehicle {
protected:
    time_t timeOfEntry;
    int ID;

public:
    Vehicle(int id);
    virtual ~Vehicle() = default;

    int getID() const;
    virtual int getParkingDuration() const = 0; // 纯虚函数
};

#endif
