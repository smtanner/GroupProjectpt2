// Boss.h
#ifndef BOSS_H
#define BOSS_H

#include "Creature.h"

class Boss : public Creature {
public:
    Boss(std::string name, int health, int defense, int attackPower)
        : Creature(name, health, defense, attackPower) {}

    int attack(Creature& target) override {
        int damage = attackPower - target.getDefense();
        return damage > 0 ? damage : 1;
    }
};

#endif
