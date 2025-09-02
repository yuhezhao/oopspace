#include "player.h"
#include <iostream>
#include <algorithm>

Player::Player(const std::string& name, int health, int damage)
    : name(name), health(health), damage(damage) {}

void Player::takeDamage(int dmg) {

    health = std::max(0, health - dmg);
    std::cout << name << " takes " << dmg
              << " damage. Remaining health: " << health << "\n";
}

const std::string& Player::getName() const { return name; }
int Player::getHealth() const { return health; }
int Player::getDamage() const { return damage; }

void Player::setName(const std::string& n) { name = n; }
void Player::setHealth(int h) { health = h; }
void Player::setDamage(int d) { damage = d; }

bool Player::isAlive() const { return health > 0; }
