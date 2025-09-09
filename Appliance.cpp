#include "Appliance.h"

// --- Constructors ---
Appliance::Appliance() : powerRating(0), isOn(false) {}

Appliance::Appliance(int powerRating)
    : powerRating(powerRating), isOn(false) {}

// --- Getters / Setters ---
int Appliance::get_powerRating() const { return powerRating; }

void Appliance::set_powerRating(int watts) { powerRating = watts; }

bool Appliance::get_isOn() const { return isOn; }

void Appliance::set_isOn(bool on) { isOn = on; }

// --- On/Off helpers ---
void Appliance::turnOn()  { isOn = true;  }
void Appliance::turnOff() { isOn = false; }

// --- Virtual power consumption ---
// Base class returns 0.0 so that derived classes can override with real logic.
double Appliance::getPowerConsumption() const { return 0.0; }
