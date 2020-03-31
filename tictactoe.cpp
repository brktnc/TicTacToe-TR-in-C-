#include "tictactoe.h"
#include <iostream>

using namespace std;

tictactoe::tictactoe() {
	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 3; y++) {
			tictac[x][y] = 0;
		}
	}
}
int tictactoe::hareket(int oyuncu, int yatay, int dikey) {
	oyuncuID = oyuncu;
	X = yatay;
	Y = dikey;
	if (tictac[X][Y]==0) {
		if (oyuncuID == 1) {
			tictac[X][Y] = 1;
		}
		else
			tictac[X][Y] = 2;
		return 0;
	}
	else
		return -1;
}
int tictactoe::oyunBitisKontrol() {
	int count=0;
	if (tictac[0][0] == tictac[0][1] && tictac[0][1] == tictac[0][2] && tictac[0][0] == 1)
		return 1;
	else if (tictac[0][0] == tictac[0][1] && tictac[0][1] == tictac[0][2] && tictac[0][0] == 2)
		return 2;
	else if (tictac[1][0] == tictac[1][1] && tictac[1][1] == tictac[1][2] && tictac[1][0] == 1)
		return 1;
	else if (tictac[1][0] == tictac[1][1] && tictac[1][1] == tictac[1][2] && tictac[1][0] == 2)
		return 2;
	else if (tictac[2][0] == tictac[2][1] && tictac[2][1] == tictac[2][2] && tictac[2][0] == 1)
		return 1;
	else if (tictac[2][0] == tictac[2][1] && tictac[2][1] == tictac[2][2] && tictac[2][0] == 2)
		return 2;
	else if (tictac[0][2] == tictac[1][2] && tictac[1][2] == tictac[2][2] && tictac[1][2] == 1)
		return 1;
	else if (tictac[0][2] == tictac[1][2] && tictac[1][2] == tictac[2][2] && tictac[1][2] == 2)
		return 2;
	else if (tictac[0][2] == tictac[1][1] && tictac[1][1] == tictac[2][0] && tictac[2][0] == 1)
		return 1;
	else if (tictac[0][2] == tictac[1][1] && tictac[1][1] == tictac[2][0] && tictac[2][0] == 2)
		return 2;
	else if (tictac[0][0] == tictac[1][1] && tictac[1][1] == tictac[2][2] && tictac[2][2] == 1)
		return 1;
	else if (tictac[0][0] == tictac[1][1] && tictac[1][1] == tictac[2][2] && tictac[2][2] == 2)
		return 2;
	else if (tictac[0][1] == tictac[1][1] && tictac[1][1] == tictac[2][1] && tictac[2][1] == 1)
		return 1;
	else if (tictac[0][1] == tictac[1][1] && tictac[1][1] == tictac[2][1] && tictac[2][1] == 2)
		return 2;
	else if (tictac[0][0] == tictac[1][0] && tictac[1][0] == tictac[2][0] && tictac[2][0] == 1)
		return 1;
	else if (tictac[0][0] == tictac[1][0] && tictac[1][0] == tictac[2][0] && tictac[2][0] == 2)
		return 2;
	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 3; y++) {
			if (tictac[x][y] == 0)
				count++;		
		}
	}
	if (count > 1)
		return -1;
	else
		return -2;
}
void tictactoe::diziBastir() {
	cout << endl;
	for (int x = 0; x < 3; ++x) {
		for (int y = 0; y < 3; ++y) {
			if (tictac[x][y] == 1)
				cout << "X ";
			else if (tictac[x][y] == 2)
				cout << "O ";
			else if (tictac[x][y]==0)
				cout << "_ ";
		}
		cout << endl;
	}
}