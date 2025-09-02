#include <iostream>
#include "wizard.h"
#include "warrior.h"

int main() {
    Wizard wiz("Merlin", 100, 0, 28);         
    Warrior war("Aragorn", 120, 17, "sword");  

    std::cout << "Battle starts: " << wiz.getName()
              << " (HP " << wiz.getHealth() << ") vs "
              << war.getName() << " (HP " << war.getHealth() << ")\n";

    bool wizardTurn = true;

    while (wiz.isAlive() && war.isAlive()) {
        if (wizardTurn) {
            wiz.castSpell(&war);
        } else {
            war.swingWeapon(&wiz);
        }
        wizardTurn = !wizardTurn;
    }

    std::cout << "Battle over! Winner: ";
    if (wiz.isAlive() && !war.isAlive()) {
        std::cout << wiz.getName() << " with " << wiz.getHealth() << " health remaining.\n";
    } else if (!wiz.isAlive() && war.isAlive()) {
        std::cout << war.getName() << " with " << war.getHealth() << " health remaining.\n";
    } else {
        std::cout << "It’s a draw.\n";
    }

    return 0;
}
