#include "graphic.h"
#include "BULLET1.h"
#include "BULLETS1.h"
#include "input.h"



BULLETS1::BULLETS1() {
	Tamakazu = 1;
	Num = 20;
	Bullet1 = new BULLET1[Num];
}

BULLETS1::~BULLETS1() {
	delete[] Bullet1;
}


void BULLETS1::init() {
	for (int i = 0; i < Num; i++) {
		Bullet1[i].init();
	}
}


void BULLETS1::appear(float px, float py) {
	for (int i = 0; i < Tamakazu; i++){
		if (Bullet1[i].Life == 0) {
			Bullet1[i].Life = 1;
			Bullet1[i].appear(px, py);
			break;
		}
	}

}

void BULLETS1::update() {
	for (int i = 0; i < Tamakazu; i++) {
		if (Bullet1[i].Life == 1) {
			Bullet1[i].update();
		}
	}
}


void BULLETS1::draw() {
	for (int i = 0; i < Tamakazu; i++) {
		if (Bullet1[i].Life == 1) {
			Bullet1[i].draw();
		}
	}
}
