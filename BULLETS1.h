#include "framework.h"
#include "window.h"
#include "graphic.h"
class BULLET1;

class BULLETS1 {
public:
	BULLETS1();
	~BULLETS1();
	void init();
	void appear(float px, float py);
	void update();
	void draw();
private:
	int Tamakazu = 0;
	int Num = 0;
	BULLET1* Bullet1 = 0;
};