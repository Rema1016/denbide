#include "input.h"
#include "TITLE.h"
#include "PLAYER1.h"
#include "PLAYER2.h"
#include "BULLET1.h"
#include "BULLETS1.h"
#include "BULLET2.h"
#include "BULLETS2.h"
#include "GAME.h"



GAME::GAME() {
	//インスタンス化
	Title = new TITLE;
	Player1 = new PLAYER1;
	Player2 = new PLAYER2;
	Bullets1 = new BULLETS1;
	Bullets2 = new BULLETS2;

	//キャラに必要な情報セット
	PLAYER1::setBullets(Bullets1);
	PLAYER2::setBullets(Bullets2);
	BULLET1::setLife(Player2);
	BULLET2::setLife(Player1);

	//初期値設定
	State = 0;
	Title->init();
	Player1->init();
	Player2->init();
	Bullets1->init();
	Bullets2->init();
}

GAME::~GAME() {
	delete Title;
	delete Player1;
	delete Player2;
	delete Bullets1;
	delete Bullets2;
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

		Title->draw();
		Bullets1->draw();
		Bullets2->draw();
		Player1->draw();
		Player2->draw();
		break;
	}
	
	present();
	
}

