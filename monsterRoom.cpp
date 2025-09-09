//
// Created by darcy on 06/04/2024.
//

#include "monsterRoom.h"
#include "monk.h"
#include "monster.h"
#include <iostream>


using namespace std;
string fightChoice;


bool monsterRoom::fight() {

    monk monk = monk::getInstance();
    monster monster = monster::getInstance();

    while ((monk.getMonkHP() > 0) && (monster.getMonsterHP() > 0)) {
                                   //(ub-1b+1)+lb
        int randomNumber = rand() % (2-1+1)+1;
        int randomNumber1 = rand() % (2 - 1 + 1) + 1;
        int randomNumber2 = rand() % (2 - 1 + 1) + 1;
        cout << "Would you like to: 1) attack or 2) defend" << endl;
        cin >> fightChoice;

        if (fightChoice == "1" || fightChoice == "attack") {
            cout << "You have chosen to attack" << endl;


            //50% failure of player attack given fight action
            if (randomNumber == 1) {
                cout << "You have attacked successfully" << endl;
                cout << "The " << monster.getMobType() << " loses " << monk.getMonkAP() << " HP" << endl;
                monster.setMonsterHP((monster.getMonsterHP() - monk.getMonkAP()));
                cout << "Your health is " << monk.getMonkHP() << endl;
                cout << "The " << monster.getMobType() << "'s health is " << monster.getMonsterHP() << endl;

            } else {
                cout << "Your attack failed!\nThe " << monster.getMobType() << " sustained no damage." << endl;
                cout << "Your health is " << monk.getMonkHP() << endl;
                cout << "The " << monster.getMobType() << "'s health is " << monster.getMonsterHP() << endl;

            }
            cout << endl;
            if (monk.isDead()) {
                cout << "You have died." << endl;
                monk.setMonkHP(15);
                return false;
            } else if (monster.getMonsterHP() <= 0) {
                cout << "You have killed the " << monster.getMobType() << ".\nYou may advance to the next room." << endl;
                monster.setMonsterHP(10);
                return true;
            }

            //50% failure of mob attack given fight action
            if (randomNumber1 == 1) {
                cout << "The " << monster.getMobType() << " fights back! You lose " << monster.getMonsterAP() << " HP" << endl;
                monk.setMonkHP(monk.getMonkHP() - monster.getMonsterAP());
                cout << "Your health is " << monk.getMonkHP() << endl;
                cout << "The " << monster.getMobType() << "'s health is " << monster.getMonsterHP() << endl;
            } else {
                cout << "The " << monster.getMobType() << " tries to attack but misses!\nYou take no damage." << endl;
                cout << "Your health is " << monk.getMonkHP() << endl;
                cout << "The " << monster.getMobType() << "'s health is " << monster.getMonsterHP() << endl;
            }
            cout << endl;

        } else if (fightChoice == "2" || fightChoice == "defend") {
            cout << "You pray all your fears away.\nYour health increases by " << monk.getMonkDP() << endl;
            monk.setMonkHP(monk.getMonkHP() + monk.getMonkDP());
            cout << "Your health is " << monk.getMonkHP() << endl;
            cout << "The " << monster.getMobType() << "'s health is " << monster.getMonsterHP() << endl;

            //50% failure of mob attack given defend choice
            if (randomNumber2 == 1) {
                cout << "The " << monster.getMobType() << " fights back! You lose " << monster.getMonsterAP() << " HP" << endl;
                monk.setMonkHP(monk.getMonkHP() - monster.getMonsterAP());
                cout << "Your health is " << monk.getMonkHP() << endl;
                cout << "The " << monster.getMobType() << "'s health is " << monster.getMonsterHP() << endl;
            } else {
                cout << "The " << monster.getMobType() << " tries to attack but misses!\nYou take no damage." << endl;
                cout << "Your health is " << monk.getMonkHP() << endl;
                cout << "The " << monster.getMobType() << "'s health is " << monster.getMonsterHP() << endl;
            }
        } else {
            cout << "Choose an appropriate option." << endl;
        }

        //Check whether player (monk) or mob is dead
        //To change next situation
        if (monk.isDead()) {
            cout << "You have died. Game over." << endl;
            return false;
        } else if (monster.getMonsterHP() <= 0) {
            cout << "You have killed the " << monster.getMobType() << ".\nYou may advance to the next room." << endl;
            monster.setMonsterHP(10);
            return true;
        }
    }
    return true;
}