#include <iostream>
#include <vector>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    int n;
    std::cout << "Enter number of vehicles to park: ";
    std::cin >> n;

    std::vector<Vehicle*> vehicles;

    for (int i = 0; i < n; i++) {
        int type;
        std::cout << "Enter vehicle type (1=Car, 2=Bus, 3=Motorbike): ";
        std::cin >> type;

        Vehicle* v = nullptr;
        if (type == 1) v = new Car(i + 1);
        else if (type == 2) v = new Bus(i + 1);
        else if (type == 3) v = new Motorbike(i + 1);

        if (v != nullptr) {
            vehicles.push_back(v);
        }
    }

    std::cout << "\nParking durations (seconds):\n";
    for (auto v : vehicles) {
        std::cout << "Vehicle ID " << v->getID()
                  << " parking duration: "
                  << v->getParkingDuration() << " seconds\n";
    }

    for (auto v : vehicles) {
        delete v;
    }

    return 0;
}
