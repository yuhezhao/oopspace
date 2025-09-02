#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
protected:
    std::string name;
    int health;
    int damage;

public:
    Player(const std::string& name, int health, int damage);
    virtual ~Player() = default;

    virtual void takeDamage(int damage);  

    const std::string& getName() const;
    int getHealth() const;
    int getDamage() const;

    void setName(const std::string& n);
    void setHealth(int h);
    void setDamage(int d);

    bool isAlive() const;
};

#endif 
