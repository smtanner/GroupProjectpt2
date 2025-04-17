// Hero.h
#ifndef HERO_H
#define HERO_H

#include "Creature.h"

class Hero : public Creature {
public:
    Hero(std::string name, int health, int defense, int attackPower)
        : Creature(name, health, defense, attackPower) {}

    int attack(Creature& target) override {
        int damage = attackPower - target.getDefense();
        return damage > 0 ? damage : 1;  // Ensure at least 1 damage
    }
};

#endif
