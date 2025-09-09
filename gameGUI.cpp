//
// Created by darcy on 06/04/2024.
//

#include "gameGUI.h"
#include <iostream>



int menuChoice;



//Set ASCII designs as an additional feature
// to aid each room entry/event

//menu
void gameGUI::menu(){
    cout << R"(
_ __ ___   ___ _ __  _   _
| '_ ` _ \ / _ \ '_ \| | | |
| | | | | |  __/ | | | |_| |
|_| |_| |_|\___|_| |_|\__,_|
)" << endl;
    cout << R"(Please choose an option:
1) Start the game
2) Read the rules
3) Exit the game)" << endl;
    cin >> menuChoice;

    switch(menuChoice) {
        case(1)://Start the game
            break;
        case(2): // Game rules
            cout << R"(The rules of the game are as followed:
You, the Monk, have arrived at a dungeon aiming to find some treasure.
If you wish to find the treasure you seek you must venture through this dungeon and find the treasure room.
However it is not that simple for monsters live in this dungeon and you must fight your way to the end.
Make it to the treasure room and it's all yours!
Die and it's game over.
Good luck!

Press 1 to continue onto the game or 3 to exit the game.)" << endl;
            cin >>menuChoice;
            switch(menuChoice){
                case(1):
                    break;
                case(3):
                    break;
                default:
                    gameGUI::menu();
            }
        case(3):
            break;
        default:
            cout << "Invalid input please select a valid input and try again" << endl;
            gameGUI::menu();


    }
}

int gameGUI::getMenuChoice(){
    return menuChoice;
}

//Goblin
//ASCI ART from: https://ascii.co.uk/art/goblin 15/03/2024
void gameGUI::goblin(){
    cout << R"(
                 ,      ,
                /(.-''-.)\
            |\     \/\/     /|
            | \ / =.  .= \ / |
            \( \   o\/o   / )/
             \_, '-/  \-' ,_/
               /   \__/   \
               \ \__/\__/ /
             ___\ \|--|/ /___
           /`    \      /    `\
          /       '----'       \
)";
}

//Skeleton
// ASCII ART from: https://www.asciiart.eu/mythology/skeletons 15/03/2024
void gameGUI::skeleton(){
    cout << R"(
                              _.--""-._
  .                         ."         ".
 / \    ,^.         /(     Y             |      )\
/   `---. |--'\    (  \__..'--   -   -- -'""-.-'  )
|        :|    `>   '.     l_..-------.._l      .'
|      __l;__ .'      "-.__.||_.-'v'-._||`"----"
 \  .-' | |  `              l._       _.'
  \/    | |                   l`^^'^^'j
        | |                _   \_____/     _
        j |               l `--__)-'(__.--' |
        | |               | /`---``-----'"1 |  ,-----.
        | |               )/  `--' '---'   \'-'  ___  `-.
        | |              //  `-'  '`----'  /  ,-'   I`.  \
      _ L |_            //  `-.-.'`-----' /  /  |   |  `. \
     '._' / \         _/(   `/   )- ---' ;  /__.J   L.__.\ :
      `._;/7(-.......'  /        ) (     |  |            | |
      `._;l _'--------_/        )-'/     :  |___.    _._./ ;
        | |                 .__ )-'\  __  \  \  I   1   / /
        `-'                /   `-\-(-'   \ \  `.|   | ,' /
                           \__  `-'    __/  `-. `---'',-'
                              )-._.-- (        `-----'
                             )(  l\ o ('..-.
                       _..--' _'-' '--'.-. |
                __,,-'' _,,-''            \ \
               f'. _,,-'                   \ \
              ()--  |                       \ \
                \.  |                       /  \
                  \ \                      |._  |
                   \ \                     |  ()|
                    \ \                     \  /
                     ) `-.                   | |
                    // .__)                  | |
                 _.//7'                      | |
               '---'                         j_| `
                                            (| |
                                             |  \
                                             |lllj
                                             |||||)";
    cout << endl;
}

//Witch
void gameGUI::witch(){
    cout << R"(
                                      __,,,
                                 _.--'    /
                              .-'        /
                            .'          |
                          .'           /
                         /_____________|
                       /`~~~~~~~~~~~~~~/
                     /`               /
      ____,....----'/_________________|---....,___
,--""`             `~~~~~~~~~~~~~~~~~~`           `""--,
`'----------------.----,------------------------,-------'`
               _,'.--. \                         \
             .'  (o   ) \                        |
            c   , '--'  |                        /
           /    )'-.    \                       /
          |  .-;        \                       |
          \_/  |___,'    |                    .-'
         .---.___|_      |                   /
        (          `     |               .--'
         '.         __,-'\             .'
           `'-----'`      \        __.'
                           `-..--'`
        )" <<endl;
}
//empty room
//ASCI ART from: https://www.asciiart.eu/religion/christianity 15/03/2024
void gameGUI::emptyRoom(){
    cout << R"(

               |
           \       /
             .---.
        '-.  |   |  .-'
          ___|   |___
     -=  [           ]  =-
         `---.   .---'
      __||__ |   | __||__
      '-..-' |   | '-..-'
        ||   |   |   ||
        ||_.-|   |-,_||
      .-"`   `"`'`   `"-.
     .'                   '.

You have entered an empty room.
You are safe for now.
)"<<endl;
}

//treasure room
//ASCII ART from: https://ascii.co.uk/art/treasure 15/03/2024
void gameGUI::treasureRoom(){
    cout << R"(
    ____...------------...____
    _.-"` /o/__ ____ __ __  __ \o\_`"-._
    .'     / /                    \ \     '.
    |=====/o/======================\o\=====|
    |____/_/________..____..________\_\____|
    /   _/ \_     <_o#\__/#o_>     _/ \_   \
    \_________\####/_________/
    |===\!/========================\!/===|
    |   |=|          .---.         |=|   |
    |===|o|=========/     \========|o|===|
    |   | |         \() ()/        | |   |
    |===|o|======{'-.) A (.-'}=====|o|===|
    | __/ \__     '-.\uuu/.-'    __/ \__ |
    |==== .'.'^'.'.====|
     |  _\o/   __  {.' __  '.} _   _\o/  _|
    `""""-""""""""""""""""""""""""""-""""` )" << endl;
}

//End screen
