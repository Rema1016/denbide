#include "framework.h"
#include "window.h"
#include "graphic.h"


class JUDGE {
public:
	JUDGE();
	~JUDGE();
	void init();
	void update();
	void draw(int* state);
	void setWinFlg(int winFlg);
	float winFlg();

private:
	int Win1Img = 0;
	int Win2Img = 0;
	int WinFlg = 0;
	int Win1Cnt = 0;
	int Win2Cnt = 0;
};