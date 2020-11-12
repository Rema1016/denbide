#include "graphic.h"
#include "PLAYER1.h"
#include "input.h"


PLAYER1::PLAYER1() {}

PLAYER1::~PLAYER1() {}


void PLAYER1::init() {
	Player1Img = loadImage("player1.gif");
	Px = 500.0f;
	Py = 500.0f;
	Dx = 2.0f;
	Dy = 2.0f;
}



void PLAYER1::update() {
	if (isPress(KEY_Z)) {
		Py -= Dy;
	}
	if (isPress(KEY_C)) {
		Py += Dy;
	}
}


void PLAYER1::draw() {
	drawImage(Player1Img, Px, Py, 300.0f);
}
