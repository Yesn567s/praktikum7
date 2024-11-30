#include <iostream>
#include <vector>
#include <time.h>
#include <ctime>

using namespace std;

//global variables
int gold=0, treasure=0, input_menu;

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

int main()
{
    do{
    main_menu();

    while (input_menu<0||input_menu>2){
    system("cls");
    main_menu();
    }

    //case 1: game  case 2: shop
    switch (input_menu){
    case 1:
        cout << "Hello World!";
    case 2:

    }

    } while (input_menu!=0);

    return 0;
}
