// Game.cpp
#include <iostream>
#include "Army.h"
#include "Hero.h"
#include "Monster.h"
#include "Boss.h"
#include "Turn.h"

int main() {
    Army player1Army;
    Army player2Army;

    // Add creatures to player 1's army
    player1Army+(new Boss("Dragon", 25, 6, 12));
    player1Army+(new Hero("Knight", 20, 5, 10));
    player1Army+(new Monster("Goblin", 15, 4, 8));

    // Add creatures to player 2's army
    player2Army+(new Boss("Demon", 22, 7, 11));
    player2Army+(new Hero("Paladin", 18, 6, 9));
    player2Army+(new Monster("Orc", 14, 5, 7));

    // Display armies
    player1Army.displayArmy("Player 1");
    player2Army.displayArmy("Player 2");

    Turn turn;

    // Start player 1's turn
    std::cout << "--- Player 1 Turn ---\n";
    turn.executeTurn(player1Army, player2Army);

    // Display updated health
    player1Army.displayArmy("Player 1");
    player2Army.displayArmy("Player 2");

    // Start player 2's turn
    std::cout << "--- Player 2 Turn ---\n";
    turn.executeTurn(player2Army, player1Army);

    // Display final health
    player1Army.displayArmy("Player 1");
    player2Army.displayArmy("Player 2");

    return 0;
}
