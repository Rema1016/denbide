#include "graphic.h"
#include "PLAYER1.h"
#include "input.h"
#include "BULLETS1.h"

PLAYER1::PLAYER1() {}

PLAYER1::~PLAYER1() {}

BULLETS1* PLAYER1::Bullets1 = 0;

void PLAYER1::init() {
	Player1Img = loadImage("po2.gif");
	Life = 1;
	Px = 200.0f;
	Py = 200.0f;
	Dx = 2.0f;
	Dy = 2.0f;
	Top = 0.0f;
	Under = 0.0f;
	Left = 0.0f;
	Right = 0.0f;
}



void PLAYER1::update() {

	Top = Py - 60.0f;
	Under = Py + 60.0f;
	Left = Px - 70.0f;
	Right = Px + 60.0f;

	if (isPress(KEY_Z)) {
		Py -= Dy;
	}
	if (isPress(KEY_C)) {
		Py += Dy;
	}
	if (isTrigger(KEY_V)) {
		Bullets1->appear(Px, Py);
	}
}


void PLAYER1::draw() {
	if (Life == 1) {
		drawImage(Player1Img, Px, Py, 0.0f);
	}
}

float PLAYER1::top() {
	return Top;
}

float PLAYER1::under() {
	return Under;
}

float PLAYER1::left() {
	return Left;
}

float PLAYER1::right() {
	return Right;
}

void PLAYER1::setLife(int life) {
	Life = life;
}
