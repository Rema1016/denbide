#include "graphic.h"
#include "PLAYER2.h"
#include "input.h"
#include "BULLETS2.h"
#include "JUDGE.h"
#include "START.h"

PLAYER2::PLAYER2() {}

PLAYER2::~PLAYER2() {}

BULLETS2* PLAYER2::Bullets2 = 0;

JUDGE* PLAYER2::Judge = 0;

START* PLAYER2::Start = 0;

void PLAYER2::init() {
	Player2Img = loadImage("po1.gif");
	Life = 1;
	Px = 1500.0f;
	Py = 200.0f;
	Dx = 2.0f;
	Dy = 2.0f;
	Top = 0.0f;
	Under = 0.0f;
	Left = 0.0f;
	Right = 0.0f;
}



void PLAYER2::update() {

	Top = Py - 78.0f;
	Under = Py + 48.0f;
	Left = Px - 100.0f;
	Right = Px + 60.0f;

	if (isPress(KEY_LEFT)) {
		Py += Dy;
	}
	if (isPress(KEY_RIGHT)) {
		Py -= Dy;
	}
	if (Start->shotKyoka() == 1) {
		if (isTrigger(KEY_M)) {
			Bullets2->appear(Px, Py);
		}
	}
	if (Life == 0) {
		if (Judge->winFlg() == 0) {
			Judge->setWinFlg(1);
		}
	}

}


void PLAYER2::draw() {
	if (Life == 1) {
		drawImage(Player2Img, Px, Py, 0.0f);
	}
}

float PLAYER2::top() {
	return Top;
}

float PLAYER2::under() {
	return Under;
}

float PLAYER2::left() {
	return Left;
}

float PLAYER2::right() {
	return Right;
}

void PLAYER2::setLife(int life) {
	Life = life;
}