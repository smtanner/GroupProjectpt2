// Monster.h
#ifndef MONSTER_H
#define MONSTER_H

#include "Creature.h"

class Monster : public Creature {
public:
    Monster(std::string name, int health, int defense, int attackPower)
        : Creature(name, health, defense, attackPower) {}

    int attack(Creature& target) override {
        int damage = attackPower - target.getDefense();
        return damage > 0 ? damage : 1;
    }
};

#endif
