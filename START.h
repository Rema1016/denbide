#include "framework.h"
#include "window.h"
#include "graphic.h"


class START {
public:
	START();
	~START();
	void init();
	void update();
	void draw();
	int shotKyoka();

private:
	int StartImg = 0;
	int StartCnt = 0;
	int ShotKyoka = 0;
};