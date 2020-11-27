#include "framework.h"
#include "window.h"
#include "graphic.h"
class BULLET2;

class BULLETS2 {
public:
	BULLETS2();
	~BULLETS2();
	void init();
	void appear(float px, float py);
	void update();
	void draw();
private:
	int Tamakazu = 0;
	int Num = 0;
	BULLET2* Bullet2 = 0;
};