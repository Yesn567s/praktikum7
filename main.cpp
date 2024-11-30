#include <iostream>
#include <vector>
#include <time.h>
#include <ctime>

using namespace std;

//global variables
int gold=0, treasure=0, input_menu;

//shovel durability
int wood_shov_dur=3, stone_shov_dur=10, iron_shov_dur=25, diamond_shov_dur=50;

 //shovel
//bool wood_shovel=true, stone_shovel=false, iron_shovel=false, diamond_shovel=false;
bool shovel[4]={true, false, false, false};

string shovels(){
    string result = "";

    for (int i = 0; i < 4; i++) {
        if (shovel[i]) {
            result += "Owned";
        } else {
            result += "Not Owned";
        }
    }

    return result;
}

//map1
void map1(){
    char pattern[10][10] = {
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
        {'#', 'P', '#', 'X', ' ', 'X', '#', 'X', 'X', '#'},
        {'#', ' ', '#', 'X', ' ', ' ', '#', ' ', ' ', '#'},
        {'#', ' ', '#', '#', ' ', ' ', '#', 'X', ' ', '#'},
        {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
        {'#', '#', '#', '#', ' ', '#', '#', '#', ' ', '#'},
        {'#', 'X', ' ', ' ', ' ', '#', ' ', ' ', ' ', '#'},
        {'#', 'X', ' ', ' ', ' ', '#', ' ', '#', '#', '#'},
        {'#', 'X', ' ', ' ', ' ', '#', ' ', ' ', 'S', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}
    };

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << pattern[i][j];
        }
        cout << endl;
    }
}

//map2
void map2(){
    char pattern[10][10] = {
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
        {'#', 'P', ' ', ' ', 'X', '#', 'X', ' ', 'X', '#'},
        {'#', ' ', ' ', ' ', 'X', '#', 'X', ' ', 'X', '#'},
        {'#', '#', '#', ' ', 'X', 'X', 'X', ' ', '#', '#'},
        {'#', 'X', '#', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
        {'#', ' ', '#', ' ', '#', ' ', ' ', ' ', 'X', '#'},
        {'#', ' ', ' ', ' ', '#', ' ', ' ', 'X', '#', '#'},
        {'#', 'X', 'X', ' ', '#', ' ', '#', '#', '#', '#'},
        {'#', '#', 'X', ' ', '#', ' ', ' ', ' ', 'S', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}
    };

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << pattern[i][j];
        }
        cout << endl;
    }
}

//map3
void map3(){
    char pattern[10][10] = {
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
        {'#', 'P', ' ', 'X', 'X', 'X', '#', ' ', 'X', '#'},
        {'#', ' ', ' ', ' ', ' ', ' ', '#', ' ', 'X', '#'},
        {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'X', '#'},
        {'#', ' ', ' ', ' ', 'X', 'X', ' ', ' ', ' ', '#'},
        {'#', ' ', ' ', ' ', 'X', 'X', ' ', ' ', ' ', '#'},
        {'#', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
        {'#', 'X', '#', ' ', ' ', ' ', ' ', 'X', 'X', '#'},
        {'#', ' ', ' ', ' ', ' ', ' ', ' ', 'X', '#', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}
    };

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << pattern[i][j];
        }
        cout << endl;
    }
}

//main menu
void main_menu(){
    cout << "=== Treasure Hunt === \n";
    cout << "Treasure: " << treasure;
    cout << endl << "Gold: " << gold;
    cout << endl << "1. Play" << endl;
    cout << "2. Shop" << endl;
    cout << "0. Exit" << endl;
    cout << ">> "; cin >> input_menu;
}

void shop_menu(){
    cout << "== Shop ==\n";
    cout << "Gold:\n";
    cout << "1. Wooden shovel (Price: 0 Gold | Durability: " << wood_shov_dur << " | " << shovels() << " )" << endl;
    cout << "2. Stone shovel (Price: 0 Gold | Durability: " << stone_shov_dur << " | " << shovels() << " )" << endl;
    cout << "3. Iron shovel (Price: 0 Gold | Durability: " << iron_shov_dur << " | " << shovels() << " )" << endl;
    cout << "4. Diamond shovel (Price: 0 Gold | Durability: " << diamond_shov_dur << " | " << shovels() << " )" << endl;
}

int main()
{
    bool cheat1, cheat2;

    do{
    main_menu();


        if(input_menu==99){
        cheat1=true;
        gold+=1000;
        system("cls");
        continue;
    }



    while (input_menu<0||input_menu>2){
    system("cls");
    main_menu();
    }

    //case 1: game  case 2: shop
    switch (input_menu){
    case 1:
        map1();
    case 2:
        shop_menu();
    }

    } while (input_menu!=0);

    return 0;
}
