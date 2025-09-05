#include <iostream>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"

int main() {
    ParkingLot lot(10);

    for (int i = 0; i < 10; i++) {
        int type;
        std::cout << "Enter vehicle type (1=Car, 2=Bus, 3=Motorbike): ";
        std::cin >> type;

        Vehicle* v = nullptr;
        if (type == 1) v = new Car(i + 1);
        else if (type == 2) v = new Bus(i + 1);
        else if (type == 3) v = new Motorbike(i + 1);

        lot.parkVehicle(v);
    }

    lot.printStatus();

    int id;
    std::cout << "Enter vehicle ID to unpark: ";
    std::cin >> id;
    lot.unparkVehicle(id);

    lot.printStatus();

    return 0;
}
