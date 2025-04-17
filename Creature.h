// Creature.h
#ifndef CREATURE_H
#define CREATURE_H

#include <string>

class Creature {
protected:
    std::string name;
    int health;
    int defense;
    int attackPower;

public:
    Creature(std::string name, int health, int defense, int attackPower)
        : name(name), health(health), defense(defense), attackPower(attackPower) {}

    virtual int attack(Creature& target) = 0;  // Pure virtual function to be implemented by derived classes

    virtual void reduceHealth(int damage) { health -= damage; }
    virtual int getHealth() const { return health; }
    virtual std::string getName() const { return name; }
    virtual int getAttack() const { return attackPower; }
    virtual int getDefense() const { return defense; }

    virtual ~Creature() = default;
};

#endif
