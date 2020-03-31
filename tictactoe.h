#define TIC_H
using namespace std;
class tictactoe {
private:
	int tictac[3][3];
	int oyuncuID;
	int X;
	int Y;
public:
	tictactoe();
	int hareket(int, int, int);
	int oyunBitisKontrol();
	void diziBastir();
};

