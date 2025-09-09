//
// Created by darcy on 06/04/2024.
//

#include "emptyRoom.h"
#include "monk.h"

//Empty room that allows for the user to either pray
//to restore health or move through the room

//Choice given for prayer or move through
void emptyRoom::pray(){
    cout << "Would you like to 1) Pray to regain health or 2) Continue on." << endl;

    int prayDecision;
    cin >> prayDecision;
    monk monk = monk::getInstance();

    //Actioned by which option is chosen
    switch (prayDecision) {
        case(1):
        {
            cout << "You pray to regain health!" << endl;
            cout << "You gain " << 15 - monk.getMonkHP() << " HP" << endl;
            monk.setMonkHP((15));
            cout << "Your HP is now " << monk.getMonkHP() << endl;
            cout << endl;
            break;
        }
        case(2):
        {
            cout << "You continue on to the next room." << endl;
            cout << endl;
            break;
        }
        default:
            cout << "Invalid input. Please choose one of the following options"<<endl;
            emptyRoom::pray();
    }
}
