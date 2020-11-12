#include "framework.h"
#include "window.h"
#include "graphic.h"

class TITLE {
public:
	TITLE();
	~TITLE();
	void init();
	void update(int* state);
	void draw();
private:
	int TitleFlg = 0;
	int TitleImg = 0;
	int AsobiImg = 0;
	int HaikeiImg = 0;
};