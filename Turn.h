// Turn.h
#ifndef TURN_H
#define TURN_H

#include "Army.h"

class Turn {
public:
    void executeTurn(Army& army1, Army& army2) {
        int actionsRemaining = 3;
        while (actionsRemaining > 0) {
            std::cout << "Actions remaining: " << actionsRemaining << "\n";
            std::cout << "attack or skip? (a/s): ";
            char action;
            std::cin >> action;

            if (action == 'a') {
                // Get the attacker index and target index
                std::cout << "Choose attacker index: ";
                int attackerIndex;
                std::cin >> attackerIndex;
                std::cout << "Choose target index: ";
                int targetIndex;
                std::cin >> targetIndex;

                // Perform the attack
                int damage = army1.getArmy()[attackerIndex]->attack(*army2.getArmy()[targetIndex]);
                std::cout << "Dealt " << damage << " damage!\n";
                army2.getArmy()[targetIndex]->reduceHealth(damage);
                actionsRemaining--;
            } else if (action == 's') {
                std::cout << "Skipped.\n";
                actionsRemaining--;
            } else {
                std::cout << "Invalid action. Please enter 'a' to attack or 's' to skip.\n";
            }
        }
    }
};

#endif
