//
// Created by darcy on 06/04/2024.
//

#ifndef THEMONK___COPYSAVE_10__MONK_H
#define THEMONK___COPYSAVE_10__MONK_H
#include <iostream>
#include "string"
using namespace std;

class monk {
public:
    static monk getInstance();
    int getMonkHP();
    int getMonkAP();
    int getMonkDP();
    bool isDead();
    void setMonkHP(int monk_hp_val);
    void setMonkAP(int monk_ap_val);
    void setMonkDP(int monk_dp_val);

    string monkName;
    string monkDesc;
    void nameMonk();
    void descMonk();
};


#endif //THEMONK___COPYSAVE_10__MONK_H
