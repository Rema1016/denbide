#include "graphic.h"
#include "TITLE.h"
#include "input.h"
#include "PLAYER1.h"
#include "PLAYER2.h"
#include "BULLETS1.h"
#include "BULLETS2.h"
#include "START.h"
#include "JUDGE.h"



TITLE::TITLE() {}

TITLE::~TITLE() {}

PLAYER1* TITLE::Player1 = 0;
PLAYER2* TITLE::Player2 = 0;
BULLETS1* TITLE::Bullets1 = 0;
BULLETS2* TITLE::Bullets2 = 0;
START* TITLE::Start = 0;
JUDGE* TITLE::Judge = 0;



void TITLE::init() {
	TitleFlg = 0;
	TitleImg = loadImage("title.jpg");
	AsobiImg = loadImage("asobikata.jpg");
	HaikeiImg = loadImage("haikei.jpg");
	State = 0;
}



void TITLE::update(int* state) {

	State = *state;

	if (TitleFlg == 0) {
		if (isTrigger(KEY_V)) {
			TitleFlg = 2;
			*state = 1;
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
	if (State == 2) {
		if (isTrigger(KEY_V)) {
			Player1->init();
			Player2->init();
			Bullets1->init();
			Bullets2->init();
			Start->init();
			Judge->init();
			*state = 1;
		}
		if (isTrigger(KEY_C)) {
			Player1->init();
			Player2->init();
			Bullets1->init();
			Bullets2->init();
			Start->init();
			Judge->init();
			TitleFlg = 0;
			*state = 0;
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
	if (TitleFlg == 2) {
		drawImage(HaikeiImg, 960, 540, 0);
	}
}
