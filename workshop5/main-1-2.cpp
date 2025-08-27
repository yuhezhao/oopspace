#include <iostream>
#include "Orchestra.h"

int main() {
    Orchestra o0; // default: size 0
    std::cout << "Default orchestra size 0, current members: "
              << o0.get_current_number_of_members() << "\n";
    std::cout << "Try add to size-0 orchestra: "
              << (o0.add_musician(Musician("violin", 3)) ? "added" : "full") << "\n\n";

    Orchestra o(3);
    Musician a("violin", 3);
    Musician b("flute", 2);
    Musician c("cello", 6);
    Musician d("trumpet", 4);

    std::cout << (o.add_musician(a) ? "added" : "full") << "\n";
    std::cout << (o.add_musician(b) ? "added" : "full") << "\n";
    std::cout << (o.add_musician(c) ? "added" : "full") << "\n";
    std::cout << (o.add_musician(d) ? "added" : "full") << " (should be full)\n\n";

    std::cout << "Has flute? " << (o.has_instrument("flute") ? "yes" : "no") << "\n";
    std::cout << "Has harp?  " << (o.has_instrument("harp")  ? "yes" : "no") << "\n";
    std::cout << "Current members: " << o.get_current_number_of_members() << " / "
              << o.get_max_size() << "\n";

    Musician* members = o.get_members();
    for (int i = 0; i < o.get_current_number_of_members(); ++i) {
        std::cout << "Member " << i << ": " << members[i].get_instrument()
                  << " (" << members[i].get_experience() << " yrs)\n";
    }

    return 0;
}
