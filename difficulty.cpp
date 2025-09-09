//
// Created by darcy on 06/04/2024.
//

#include "difficulty.h"

//Default difficulty level set at 1
int difficultyLevel = 1;


//Allows user to choose which difficulty to play
//Different difficulties changes both the monk and the
// mob's health points and attack points therefore
// Increasing the difficulty. 

//Difficulty setter
void difficulty::setDifficulty(){
    cout << "What difficulty mode would you like to play the game?"<<endl;
    cout << "1) Easy 2) Medium 3) Hard" << endl;
    cin >> difficultyLevel;
    switch(difficultyLevel){
        case 1:
            cout << "You have selected easy mode" << endl;
            difficultyLevel = 1;
            break;
        case 2:
            cout << "You have selected medium mode" << endl;
            difficultyLevel = 2;
            break;
        case 3:
            cout << "You have selected hard mode" << endl;
            difficultyLevel = 3;
            break;
        default:
            cout << "Invalid input. Please choose one of the following options."<<endl;
            difficulty::setDifficulty();
    }
}

//Difficulty getter
int difficulty::getDifficulty() {
    return difficultyLevel;
}
