#include "graphic.h"
#include "BULLET2.h"
#include "PLAYER1.h"
#include "input.h"


BULLET2::BULLET2() {}

BULLET2::~BULLET2() {}

PLAYER1* BULLET2::Player1 = 0;

void BULLET2::init() {
	Bullet2Img = loadImage("playergm.gif");
	Life = 0;
	WindowWidth = 0.0f;
}

void BULLET2::appear(float px, float py) {
	Px = px;
	Py = py;
	Dx = 5.0f;
	Dy = 5.0f;
	Top = 0;
	Under = 0;
	Left = 0;
	Right = 0;
	Life = 1;
}

void BULLET2::update() {

	Top = Py - 20.0f;
	Under = Py - 20.0f;
	Left = Px - 20.0f;
	Right = Px + 20.0f;
	Px -= Dx;

	if (Px < WindowWidth) {
		Life = 0;
	}

	if (Player1->top() < Top && Player1->under() > Under && Player1->left() < Left && Player1->right() > Right) {
		Life = 0;
		Player1->setLife(0);
	}
}


void BULLET2::draw() {
		drawImage(Bullet2Img, Px, Py, 0.0f);
}
