#ifndef APPLIANCE_H
#define APPLIANCE_H

#include <string>

class Appliance {
public:
    // Constructors
    Appliance();                  // default: powerRating = 0, isOn = false
    explicit Appliance(int powerRating);

    // Getters / Setters (must be prefixed get_ / set_)
    int  get_powerRating() const;
    void set_powerRating(int watts);

    bool get_isOn() const;
    void set_isOn(bool on);       // provided for completeness (turnOn/turnOff preferred)

    // State-changing helpers
    void turnOn();                // set isOn = true
    void turnOff();               // set isOn = false

    // Polymorphic API
    virtual double getPowerConsumption() const; // base returns 0.0

    // Virtual destructor in base for safety
    virtual ~Appliance() = default;

private:
    int  powerRating;   // in Watts
    bool isOn;
};

#endif // APPLIANCE_H
