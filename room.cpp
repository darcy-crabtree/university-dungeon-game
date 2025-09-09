//
// Created by darcy on 06/04/2024.
//

#include <cstdlib>
#include <ctime>
#include "room.h"

//Minimum of 4 rooms max of 10 rooms
//Determines the number of rooms the dungeon has
int room::getNumRooms(){
    srand(time(NULL));
                                //(ub-1b+1)+lb
    int randomNumber = rand() % (10-4 + 1) + 4;
    return randomNumber;
}

