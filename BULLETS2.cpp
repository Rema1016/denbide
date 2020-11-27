#include "graphic.h"
#include "BULLET2.h"
#include "BULLETS2.h"
#include "input.h"



BULLETS2::BULLETS2() {
	Tamakazu = 1;
	Num = 20;
	Bullet2 = new BULLET2[Num];
}

BULLETS2::~BULLETS2() {
	delete[] Bullet2;
}


void BULLETS2::init() {
	for (int i = 0; i < Num; i++) {
		Bullet2[i].init();
	}
}


void BULLETS2::appear(float px, float py) {
	for (int i = 0; i < Tamakazu; i++){
		if (Bullet2[i].Life == 0) {
			Bullet2[i].Life = 1;
			Bullet2[i].appear(px, py);
			break;
		}
	}

}

void BULLETS2::update() {
	for (int i = 0; i < Tamakazu; i++) {
		if (Bullet2[i].Life == 1) {
			Bullet2[i].update();
		}
	}
}


void BULLETS2::draw() {
	for (int i = 0; i < Tamakazu; i++) {
		if (Bullet2[i].Life == 1) {
			Bullet2[i].draw();
		}
	}
}
