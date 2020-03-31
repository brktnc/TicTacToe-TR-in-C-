#include <iostream>
#include "tictactoe.h"
using namespace std;

int main() {
    int winner;
    winner = 0;
    int x, y;
    tictactoe obj;
    while (obj.oyunBitisKontrol() == -1) {
        obj.diziBastir();
    oyuncu1:
        x = 0;
        y = 0;
        cout << "Oyuncu1 konum sec: (x,y seklinde) "<<endl;
        cin >> x>>y;
        int b;
        b= obj.hareket(1, x-1, y-1);
        if (b == -1) {
            cout << "Tekrardan giris yapiniz,girdiginiz deger gecerli degil." << endl;
            goto oyuncu1;
        }
        if (obj.oyunBitisKontrol() == 1) {
            winner = 1;
            goto kazanan;
        }
        if (obj.oyunBitisKontrol() == -2) {
            goto berabere;
        }
        obj.diziBastir();
    oyuncu2:
        x = 0;
        y = 0;
        cout << "oyuncu2 konum sec: (x,y seklinde)" << endl;
        cin >> x>>y;
        int a;
        a=obj.hareket(2, x-1, y-1);
        if (a == -1) {
            cout << "Tekrardan giris yapiniz,girdiginiz deger gecerli degil." << endl;
            goto oyuncu2;
        }
        if (obj.oyunBitisKontrol() == 2) {
            winner = 2;
            goto kazanan;
        }
    }
berabere:
    cout << endl;
    cout << "Kazanan yok." << endl;

kazanan:
    cout << endl;
    obj.diziBastir();
    if(winner==1)
        cout << "Oyuncu1 kazandi." << endl;
    else if(winner==2)
        cout << "Oyuncu2 kazandi." << endl;
}