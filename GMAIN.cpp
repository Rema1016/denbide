#include "framework.h"
#include "window.h"
#include "graphic.h"
#include "input.h"
#include "TITLE.h"
#include "PLAYER1.h"

#define STATE_TITLE 0
#define STATE_PLAY 1
#define STATE_GAMEOVER 2



void gmain() {
	initialize("",1920,1080,FULLSCREEN);
	//ÉNÉâÉXì«Ç›çûÇ›
	TITLE title;
	PLAYER1 player1;
	int state = STATE_TITLE;

	//èâä˙ílê›íË
	title.init();
	player1.init();


	while (msgProc()) {
		getInput();
        clearTarget();
		switch (state) {
		case STATE_TITLE:
			title.update(&state);
			title.draw();


		case STATE_PLAY:
			player1.update();
			player1.draw();
			



		



		}
		
		
		
		
		present();
	}
}
