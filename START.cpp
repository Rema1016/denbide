#include "graphic.h"
#include "START.h"
#include "input.h"


START::START() {}

START::~START() {}


void START::init() {
	StartImg = loadImage("start.gif");
	StartCnt = 140;

}



void START::update() {
	if (StartCnt > 0) {
		StartCnt--;
	}
	if (StartCnt == 0) {
		ShotKyoka = 1;
	}
}


void START::draw() {
	if (StartCnt <= 120 && StartCnt >= 1) {
		drawImage(StartImg, -40.0f, 40.0f);
	}
	
}

int START::shotKyoka() {
	return ShotKyoka;
}