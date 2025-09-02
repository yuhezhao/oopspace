#include "wizard.h"
#include <iostream>

Wizard::Wizard(const std::string& name, int health, int damage, int mana)
    : Player(name, health, damage), mana(mana) {}

void Wizard::castSpell(Player* opponent) {
    int dmg = mana;
    std::cout << name << " casts a spell on " << opponent->getName()
              << " for " << dmg << " damage.\n";
    opponent->takeDamage(dmg);
}

int Wizard::getMana() const { return mana; }
void Wizard::setMana(int m) { mana = m; }
