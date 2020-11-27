#include "graphic.h"
#include "BULLET1.h"
#include "PLAYER2.h"
#include "input.h"


BULLET1::BULLET1() {}

BULLET1::~BULLET1() {}

PLAYER2* BULLET1::Player2 = 0;

void BULLET1::init() {
	Bullet1Img = loadImage("playergm.gif");
	Life = 0;
	WindowWidth = 1920.0f;
}

void BULLET1::appear(float px, float py) {
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

void BULLET1::update() {
	
	Top = Py - 20.0f;
	Under = Py - 20.0f;
	Left = Px - 20.0f;
	Right = Px + 20.0f;
	
	Px += Dx;
	if (Px > WindowWidth) {
		Life = 0;
	}
	
	if (Player2->top() < Top && Player2->under() > Under && Player2->left() < Left && Player2->right() > Right) {
		Life = 0;
		Player2->setLife(0);
	}
	
}


void BULLET1::draw() {
		drawImage(Bullet1Img, Px, Py, 0.0f);
}
