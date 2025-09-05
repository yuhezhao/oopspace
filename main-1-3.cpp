#include <iostream>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"

int main() {
    ParkingLot lot(10);

    // 停 5 辆 Car
    for (int i = 0; i < 5; i++) {
        lot.parkVehicle(new Car(i + 1));
    }
    // 停 3 辆 Bus
    for (int i = 0; i < 3; i++) {
        lot.parkVehicle(new Bus(100 + i));
    }
    // 停 2 辆 Motorbike
    for (int i = 0; i < 2; i++) {
        lot.parkVehicle(new Motorbike(200 + i));
    }

    int count = lot.countOverstayingVehicles(15);
    std::cout << "Number of overstaying vehicles: " << count << std::endl;

    return 0;
}
