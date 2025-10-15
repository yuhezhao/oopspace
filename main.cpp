#include <iostream>
#include "Player.h"

int main() {
    Player p1("Alice");
    Player p2("Bob");

    std::cout << p1.getName() << " HP: " << p1.getHealth() << "\n";
    std::cout << p2.getName() << " HP: " << p2.getHealth() << "\n";

    // Bob blocks Alice's hit (should halve damage)
    p2.setBlocking(true);
    p2.takeDamage(30); // becomes 15
    std::cout << "After Alice hits, " << p2.getName() << " HP: " << p2.getHealth()
              << " (blocking now " << (p2.getIsBlocking() ? "ON" : "OFF") << ")\n";

    // Next hit is unblocked
    p2.takeDamage(30); // full 30
    std::cout << "After another hit, " << p2.getName() << " HP: " << p2.getHealth() << "\n";

    // Show alive status
    std::cout << p2.getName() << (p2.isAlive() ? " is alive\n" : " is down\n");

    return 0;
}
