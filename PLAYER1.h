#include "framework.h"
#include "window.h"
#include "graphic.h"

class BULLETS1;
class JUDGE;
class START;

class PLAYER1 {
public:
	PLAYER1();
	~PLAYER1();
	void init();
	void update();
	void draw();
	float top();
	float under();
	float left();
	float right();
	void setLife(int life);
	static void setBullets(BULLETS1* bullets1) { Bullets1 = bullets1; }
	static void setWinFlg(JUDGE* judge) { Judge = judge; }
	static void getShotKyoka(START* start) { Start = start; }
private:
	int Player1Img = 0;
	int Life = 0;
	float Px = 0;
	float Py = 0;
	float Dx = 0;
	float Dy = 0;
	float Top = 0;
	float Under = 0;
	float Left = 0;
	float Right = 0;
	static BULLETS1* Bullets1;
	static JUDGE* Judge;
	static START* Start;
};