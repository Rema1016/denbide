#include "framework.h"
#include "window.h"
#include "graphic.h"
#include "input.h"
#include "GAME.h"




void gmain() {
	initialize("",1920,1080,FULLSCREEN);
	
	GAME* game = new GAME;
	

	while (msgProc()) {
		game->Proc();
	}
	delete game;
}
