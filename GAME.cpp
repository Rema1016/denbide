#include "input.h"
#include "TITLE.h"
#include "PLAYER1.h"
#include "PLAYER2.h"
#include "BULLET1.h"
#include "BULLETS1.h"
#include "BULLET2.h"
#include "BULLETS2.h"
#include "JUDGE.h"
#include "START.h"
#include "GAME.h"



GAME::GAME() {
	//インスタンス化
	Title = new TITLE;
	Player1 = new PLAYER1;
	Player2 = new PLAYER2;
	Bullets1 = new BULLETS1;
	Bullets2 = new BULLETS2;
	Judge = new JUDGE;
	Start = new START;

	//キャラに必要な情報セット
	TITLE::initPlayer1(Player1);
	TITLE::initPlayer2(Player2);
	TITLE::initBullets1(Bullets1);
	TITLE::initBullets2(Bullets2);
	TITLE::initJudge(Judge);
	TITLE::initStart(Start);
	PLAYER1::setBullets(Bullets1);
	PLAYER1::setWinFlg(Judge);
	PLAYER1::getShotKyoka(Start);
	PLAYER2::setBullets(Bullets2);
	PLAYER2::setWinFlg(Judge);
	PLAYER2::getShotKyoka(Start);
	BULLET1::setLife(Player2);
	BULLET2::setLife(Player1);

	//初期値設定
	State = 0;
	Title->init();
	Player1->init();
	Player2->init();
	Bullets1->init();
	Bullets2->init();
	Judge->init();
	Start->init();
}

GAME::~GAME() {
	delete Title;
	delete Player1;
	delete Player2;
	delete Bullets1;
	delete Bullets2;
	delete Judge;
	delete Start;
}

void GAME::Proc() {
	getInput();
	
	clearTarget();
	switch (State) {
	case 0:
		Title->update(&State);
        Title->draw();
		break;

	case 1:
		Title->update(&State);
		Player1->update();
		Player2->update();
		Bullets1->update();
		Bullets2->update();
		Start->update();
		Judge->update();

		Title->draw();
		Bullets1->draw();
		Bullets2->draw();
		Player1->draw();
		Player2->draw();
		Start->draw();
		Judge->draw(&State);
		break;

	case 2:
		
		
		Title->update(&State);
		Judge->update();

		Title->draw();
		Judge->draw(&State);

	}
	
	present();
	
}

