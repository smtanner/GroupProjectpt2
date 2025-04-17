// Army.h
#ifndef ARMY_H
#define ARMY_H

#include <vector>
#include <iostream>
#include "Creature.h"

class Army {
private:
    std::vector<Creature*> creatures;

public:
    ~Army() {
        for (auto creature : creatures) {
            delete creature;
        }
    }

    void operator+(Creature* creature) {
        creatures.push_back(creature);
    }

    void displayArmy(const std::string& playerName) const {
        std::cout << playerName << " Army:\n";
        for (const auto& creature : creatures) {
            std::cout << creature->getName() << ": "
                      << "ATK: " << creature->getAttack() << ", "
                      << "DEF: " << creature->getDefense() << ", "
                      << "HP: " << creature->getHealth() << "\n";
        }
        std::cout << "\n";
    }

    std::vector<Creature*>& getArmy() { return creatures; }
    const std::vector<Creature*>& getArmy() const { return creatures; }
};

#endif
