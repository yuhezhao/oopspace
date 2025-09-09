#include <iostream>
#include "Appliance.h"

int main() {
    // Default-constructed appliance
    Appliance a; // powerRating = 0, isOn = false
    std::cout << "A: power=" << a.get_powerRating()
              << "W, isOn=" << (a.get_isOn() ? "true" : "false")
              << ", base consumption=" << a.getPowerConsumption() << " kWh\n";

    // Parameterized constructor
    Appliance kettle(2000); // 2000 W device
    std::cout << "Kettle: power=" << kettle.get_powerRating()
              << "W, isOn=" << (kettle.get_isOn() ? "true" : "false") << '\n';

    // Demonstrate setters and on/off
    kettle.turnOn();
    std::cout << "Kettle turned on. isOn=" << (kettle.get_isOn() ? "true" : "false") << '\n';

    kettle.set_powerRating(1800);
    std::cout << "Kettle new power rating = " << kettle.get_powerRating() << "W\n";

    kettle.turnOff();
    std::cout << "Kettle turned off. isOn=" << (kettle.get_isOn() ? "true" : "false") << '\n';

    // Base class virtual returns 0.0; derived classes will override later.
    std::cout << "Base getPowerConsumption() = " << kettle.getPowerConsumption() << " kWh\n";

    return 0;
}
