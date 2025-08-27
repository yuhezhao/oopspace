#include "Musician.h"

// default constructor: instrument="null", experience=0
Musician::Musician() : instrument("null"), experience(0) {}

Musician::Musician(std::string instrument, int experience)
    : instrument(instrument), experience(experience) {}

std::string Musician::get_instrument() { return instrument; }

int Musician::get_experience() { return experience; }

// Optional helpers
void Musician::set_instrument(const std::string& instrument) {
    this->instrument = instrument;
}
void Musician::set_experience(int experience) {
    this->experience = experience;
}
