//
// Created by darcy on 06/04/2024.
//

#include "monk.h"


//Health points
int monkHP = 15;
//Attack points
int monkAP = 3;
//Defence points
int monkDP = 1;

//Instance
//This singleton instance was based off:
// https://refactoring.guru/design-patterns/singleton examples
// and the examples in DesignPatternsexamples Singleton example by Rabia Jilani
// https://brightspace.hud.ac.uk/d2l/le/content/303680/viewContent/2460378/View
static monk *monkInstancePtr = nullptr;
monk monk::getInstance() {
    if (monkInstancePtr == nullptr) {
        monkInstancePtr = new monk();
    }

    return *monkInstancePtr;
}

//Getters
int monk::getMonkHP() {
    return monkHP;
}

int monk::getMonkAP() {
    return monkAP;
}

int monk::getMonkDP() {
    return monkDP;
}

bool monk::isDead(){
    return getMonkHP() <=0;
}

//Setters: HP, AP, DP Name and description
//Health points = HP
void monk::setMonkHP(int monk_hp_val) {
    monkHP = monk_hp_val;
}

//Attack points = AP
void monk::setMonkAP(int monk_ap_val){ 
    monkAP = monk_ap_val;
}

//Defence points = DP
void monk::setMonkDP(int monk_dp_val){
    monkDP = monk_dp_val;
}

void monk::nameMonk() {
    cout << "Choose your character name." << endl;
    cin >> monkName;
}

void monk::descMonk() {
    cout << "Choose a short description for your character." << endl;
    cin >> monkDesc;
}



