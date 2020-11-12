#include "graphic.h"
#include "TITLE.h"
#include "input.h"


TITLE::TITLE() {}

TITLE::~TITLE() {}


void TITLE::init() {
	TitleFlg = 0;
	TitleImg = loadImage("title.jpg");
	AsobiImg = loadImage("asobi.jpg");
	HaikeiImg = 0;
}



void TITLE::update(int* state) {
	if (TitleFlg == 0) {
		if (isTrigger(KEY_V)) {
			TitleFlg = 3;
			*state = 3;
		}
	}
	if (isTrigger(KEY_C)) {
		if (TitleFlg == 0) {
			TitleFlg = 1;
		}
		else if (TitleFlg == 1) {
			TitleFlg = 0;
		}
	}
}




void TITLE::draw() {
	if (TitleFlg == 0) {
		drawImage(TitleImg, 0, 0);
	}
	if (TitleFlg == 1) {
		drawImage(AsobiImg, 960, 540, 0);
	}
}
