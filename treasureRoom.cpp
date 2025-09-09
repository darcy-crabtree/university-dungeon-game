//
// Created by darcy on 06/04/2024.
//

#include "treasureRoom.h"
#include "gameGUI.h"
#include <iostream>

using namespace std;

//Final room to end the game
void treasureRoom::arrival(){
    gameGUI::treasureRoom();
    cout << "Congratulations, you have arrived in the treasure room!\nYou have completed the dungeon." << endl;
}