//
// Created by darcy on 06/04/2024.
//

#ifndef THEMONK___COPYSAVE_10__MONSTER_H
#define THEMONK___COPYSAVE_10__MONSTER_H
#include <iostream>
using namespace std;

class monster {
public:
    static monster getInstance();
    int getMonsterHP();
    int getMonsterAP();
    void setMonsterHP(int set_mob_HP);
    void setMobType();
    string getMobType();
};


#endif //THEMONK___COPYSAVE_10__MONSTER_H
