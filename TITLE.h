#include "framework.h"
#include "window.h"
#include "graphic.h"

class PLAYER1;
class PLAYER2;
class BULLETS1;
class BULLETS2;
class JUDGE;
class START;

class TITLE {
public:
	TITLE();
	~TITLE();
	void init();
	void update(int* state);
	void draw();
	static void initPlayer1(PLAYER1* player1) { Player1 = player1; }
	static void initPlayer2(PLAYER2* player2) { Player2 = player2; }
	static void initBullets1(BULLETS1* bullets1) { Bullets1 = bullets1; }
	static void initBullets2(BULLETS2* bullets2) { Bullets2 = bullets2; }
	static void initJudge(JUDGE* judge) { Judge = judge; }
	static void initStart(START* start) { Start = start; }
private:
	int TitleFlg = 0;
	int TitleImg = 0;
	int AsobiImg = 0;
	int HaikeiImg = 0;
	int State = 0;
	static PLAYER1* Player1;
	static PLAYER2* Player2;
	static BULLETS1* Bullets1;
	static BULLETS2* Bullets2;
	static JUDGE* Judge;
	static START* Start;

};