#include "graphic.h"
#include "JUDGE.h"
#include "input.h"


JUDGE::JUDGE() {}

JUDGE::~JUDGE() {}


void JUDGE::init() {
	Win1Img = loadImage("player1win.gif");
	Win2Img = loadImage("player2win.gif");
	WinFlg = 0;
}



void JUDGE::update() {
	if (WinFlg == 1) {
		if (Win1Cnt < 100) {
			Win1Cnt++;
			
		}
	}
	if (WinFlg == 2) {
		if (Win2Cnt < 100) {
			Win2Cnt++;
			
		}
	}
}


void JUDGE::draw(int* state) {
	if (Win1Cnt > 90) {
		drawImage(Win1Img, -100.0f, 100.0f);
		*state = 2;
	}
	if (Win2Cnt > 90) {
		drawImage(Win2Img, -100.0f, 100.0f);
		*state = 2;
	}
	
}

void JUDGE::setWinFlg(int winFlg) {
	WinFlg = winFlg;

}

float JUDGE::winFlg() {
	return WinFlg;
}