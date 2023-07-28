#include <iostream>
#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

using namespace std;

Referee::Referee() {

}

Player* Referee::refGame(Player* player1, Player* player2) {
    int win = 0;
    if ((player1->makeMove() == 'R') &&(player2->makeMove() == 'R')) {
        win = 0;
    } else if ((player1->makeMove() == 'S') &&(player2->makeMove() == 'R')) {
        win = 2;
    } else if ((player1->makeMove() == 'P') &&(player2->makeMove() == 'R')) {
        win = 1;
    }  else if ((player1->makeMove() == 'R') &&(player2->makeMove() == 'S')) {
        win = 1;
    } else if ((player1->makeMove() == 'R') &&(player2->makeMove() == 'P')) {
        win = 2;
    }

    if (win == 1) {
        // cout << player1->getName() << " Wins." << endl;
        return player1;
    } else if (win == 2) {
        // cout << player2->getName() << " Wins." << endl;
        return player2;
    } else if (win == 0) {
        // cout << "It's a Tie." << endl;
        return nullptr;
    } else {
        return nullptr;
    }
}
