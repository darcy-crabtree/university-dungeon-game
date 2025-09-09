//
// Created by darcy on 06/04/2024.
//

#include "monster.h"
#include "difficulty.h"
#include "monk.h"

//Using the mob variable allows for
//generalisation so different mobs can be added

//Monster default Health points
// Health points = HP
int goblinHP = 10;
int skeletonHP = 15;
int witchHP = 20;
int mobHP = 10;

//Monster default Attack points
// Attack points = AP
int goblinAP = 2;
int skeletonAP = 3;
int witchAP = 5;
int mobAP = 2;
string mobType;


//Instance
static monster* monsterInstancePtr = nullptr;

monster monster::getInstance() {
    if (monsterInstancePtr == nullptr) {
        monsterInstancePtr = new monster();
    }

    return *monsterInstancePtr;
}

//getters: if dead, HP and AP
//bool monster::isDead(){
//    return getMonsterHP() <=0;
//}

//Mob stats
int monster::getMonsterHP() {
    return mobHP;
}

int monster::getMonsterAP() {
    return mobAP;
}

//Setters: HP and AP
void monster::setMonsterHP(int set_mob_HP) {
    mobHP = set_mob_HP;
}

monk monk = monk::getInstance();

//Changes both monk and mob stats
// to allow for difficulty changes
void monster::setMobType() {
    int difficulty = difficulty::getDifficulty();
    
    //Stats for difficulty 1
    if (difficulty == 1) {
        monk.setMonkHP(15);
        goblinHP = 10;
        monk.setMonkAP(3);
        goblinAP = 1;
        monk.setMonkDP(1);
        mobType = "goblin";
        mobHP = goblinHP;
        mobAP = goblinAP;
    }

    //Stats for difficulty 2
    else if (difficulty::getDifficulty() == 2) {
        monk.setMonkHP(15);
        goblinHP = 10;
        monk.setMonkAP(4);
        goblinAP = 2;
        monk.setMonkDP(2);
        skeletonHP = 15;
        skeletonAP = 3;

        //Random choosing between 2 mobs on which
        //is to appear in the monster room
        int randomNumber3 = rand() % 2;

        if (randomNumber3 == 1) {
            mobType = "goblin";
            mobHP = goblinHP;
            mobAP = goblinAP;
        } else {
            mobType = "skeleton";
            mobHP = skeletonHP;
            mobAP = skeletonAP;
        }

    //Stats for difficulty 3
    } else if (difficulty::getDifficulty() == 3) {
        monk.setMonkHP(15);
        monk.setMonkAP(5);
        monk.setMonkDP(3);

        goblinHP = 10;
        goblinAP = 3;

        skeletonHP = 15;
        skeletonAP = 4;

        witchHP = 20;
        witchAP = 5;

        //Random choosing between 3 mobs on which
        //is to appear in the monster room
        int randomNumber4 = rand() % 3;

        if (randomNumber4 == 1) {
            mobType = "goblin";
            mobHP = goblinHP;
            mobAP = goblinAP;
        } else if (randomNumber4 == 2) {
            mobType = "skeleton";
            mobHP = skeletonHP;
            mobAP = skeletonAP;
        } else {
            mobType = "witch";
            mobHP = witchHP;
            mobAP = witchAP;
        }
    }
}

//Getter for mobtype that is randomly chosen
string monster::getMobType(){
    return mobType;
}

