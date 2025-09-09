#include <iostream>

#include "gameGUI.h"
#include "room.h"
#include "emptyRoom.h"
#include "monsterRoom.h"
#include "treasureRoom.h"
#include "monk.h"
#include "monster.h"
#include "difficulty.h"


using namespace std;

//gameGUI game;



int main() {
    gameGUI::menu();
    if (gameGUI::getMenuChoice() == 3){
        return 0;
    }
    difficulty::setDifficulty();
    monk monk = monk::getInstance();
    monk.nameMonk();
    monk.descMonk();
    monster monster = monster::getInstance();
    int room_count = 2;
    int randomNumber;
    int dungeon_roomNo = ((room::getNumRooms()));
    cout << "Total number of rooms: " << room::getNumRooms() <<endl;

    for (int i = 0; (room_count < dungeon_roomNo ); i++){

        cout << "Room Count: " << room_count-1 << endl;
        randomNumber = rand() % 2;

        if (randomNumber == 1){
            cout << "Room assignment: monster" <<endl;
            room_count++;
            monster.setMobType();
            cout << "Monster: "<< monster.getMobType() << endl;
            cout <<endl;

            if (monster.getMobType() =="goblin"){
                gameGUI::goblin();
            }
            else if (monster.getMobType() == "skeleton"){
                gameGUI::skeleton();
            }
            else{
                gameGUI::witch();
            }
            if (!monsterRoom::fight()){
                return 0;
            }

        }
        else {
            cout << "Room assignment: empty" << endl;
            cout <<endl;
            room_count++;
            gameGUI::emptyRoom();
            emptyRoom::pray();
        }

    }

    //Ensures at least 2 empty rooms
    cout << "Room Count: " << room_count-1 <<endl;
    cout << "Room assignment: empty" << endl;
    cout << endl;
    room_count++;
    gameGUI::emptyRoom();
    emptyRoom::pray();

    cout << "Room Count: " << room_count-1 <<endl;
    cout << "Room assignment: treasure" << endl;
    cout << endl;
    
    treasureRoom::arrival();

    return 0;
}
