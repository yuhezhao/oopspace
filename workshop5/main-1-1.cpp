#include <iostream>
#include "Musician.h"

int main() {
    Musician m1; // default
    std::cout << "Default -> instrument: " << m1.get_instrument()
              << ", experience: " << m1.get_experience() << "\n";

    Musician m2("violin", 5);
    std::cout << "Param    -> instrument: " << m2.get_instrument()
              << ", experience: " << m2.get_experience() << "\n";

    // Optional: show setters work (not required by spec)
    m1.set_instrument("flute");
    m1.set_experience(2);
    std::cout << "Updated  -> instrument: " << m1.get_instrument()
              << ", experience: " << m1.get_experience() << "\n";

    return 0;
}