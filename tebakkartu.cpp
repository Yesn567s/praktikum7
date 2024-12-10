#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string generate_kartu(int x){
    string cards[52];
    string lambang[] = {"Waru", "Hati", "Wajik", "Keriting"};
    string angka[] = {"As", "Dua", "Tiga", "Empat", "Lima", "Enam", "Tujuh", "Delapan", "Sembilan", "Sepuluh", "Jack", "Queen", "King"};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            cards[i*13+j] = (angka[j] + " " + lambang[i]);
        }
    }
    return cards[x];
}
void check(string card, string n)
{
    if(n == card){
        cout << "Benar!" << endl;
    }
    else{
        cout << "Salah" << endl;
    }
}

int main()
{
    string n, card;
    srand(time(0));
    cout << "=== Tebak Kartu ===" << endl;
    cout << "Cara Menebak:" << endl;
    cout << "Simbol Kartu: Waru, Hati, Wajik, Keriting" << endl;
    cout << "Angka Kartu: As, Dua, Tiga, Empat, Lima, Enam, Tujuh, Delapan, Sembilan, Sepuluh, Jack, Queen, King" << endl;
    cout << "Format jawaban: As Waru, Lima Keriting, Queen Hati, King Wajik." << endl << endl;
    cout << "Mulai!" << endl << endl;
    card = generate_kartu(rand()%52);
    cout << card << endl;
    cin >> n;
    check(card,n);
    cout << "GAME OVER!" << endl;
    return 0;

}
