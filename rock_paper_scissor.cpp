#include <iostream>
#include <string>
#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

using namespace std;

int main() {
    Player** player;
    player = new Player*[2];

    Computer computer;
    
    player[0] = new Human("Kenny");
    player[1] = new Computer();

    Referee ref;
    

    char hand;
    string name;
    cout << "Welcome to R P S, please give me your name and hand" << endl;
    cin >> name;
    cin >> hand;

    player[0]->setName(name);
    player[0]->setMove(hand);

    ref.refGame(player[0], player[1]);

    return 0;
}