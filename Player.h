#pragma once
#include <string>

class Player {
private:
    std::string name;   // Name of the player
    int health;         // Current HP, starts at 100
    bool isBlocking;    // Whether player is currently blocking, starts false

public:
    // Constructor: player starts with 100 HP and not blocking
    explicit Player(const std::string& name);

    // Apply damage to player (respecting blocking mechanics)
    void takeDamage(int damage);

    // Set / get blocking state
    void setBlocking(bool blocking);
    bool getIsBlocking() const;

    // Accessors
    int getHealth() const;
    std::string getName() const;

    // Alive?
    bool isAlive() const;
};
